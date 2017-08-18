import smtplib
readMe=open('file.txt','r')
str=readMe.read()
while(str):
 
 server = smtplib.SMTP('smtp.gmail.com', 587)
 server.starttls()
 server.login("rukja2014@gmail.com", "maipagalhu")
 
 msg = "YOUR MESSAGE!"
 server.sendmail("rukja2014@gmail.com", "appu.anshaj@gmail.com", msg)
 server.quit()
readMe.close()
