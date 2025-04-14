pwd=input("What is the master password?")

def view():
   pass

def add():
   name = input('Account Name:  ')
   pwd = input("Password:   ")

    with open('password.txt','r')as f:
        f.write(name + "|" + pwd)


while True:
    mode=input("Do you want to view the existing password or create a new one (view and add)?press q to quit").lower();
     if mode=="q":
        break

     if mode=="view":
        view()
    elfi mode == "add":
        add()
    else
        print("invalid mode.")
    continue