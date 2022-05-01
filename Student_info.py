import csv

def file_info(info_list):
    with open('std_info.csv', 'a',newline='\n') as csv_file:
        writer= csv.writer(csv_file)
        if csv_file.tell()==0:
            writer.writerow(["Name","Age","Contact Number","Email Id"])
        writer.writerow(info_list)


if __name__ == '__main__':

    cond=True
    std_num=1

    while(cond):
        std_info = input("\nEnter student {} information the following format (Name Age Contact_No. Email_Id) : ".format(std_num))

        # spilt function for the entered information by the user

        std_info_list=std_info.split(" ")

        print("\nThe Entered Information is : \nName: {}\nAge: {}\nContact Number: {}\nEmail Id: {}"
                .format(std_info_list[0],std_info_list[1],std_info_list[2],std_info_list[3]))

        choice= input("Is the Entered Information Correct? (Y/N) : ")

        if choice=='Y':
            file_info(std_info_list)
            std_num+=1
            cond_con = input("\nEnter (Y/N) if you want to enter the information for another student: ")

            if cond_con == "Y":
                cond = True
            elif cond_con == 'N':
                cond = False
        elif choice=='N':
            print("\n Please renter the values")





