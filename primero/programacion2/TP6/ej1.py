open = "1"
client_queue = list()

while open != "0":
    op = input("add:1 - next:2 - show:3 : ")
    if op == "1":
        new_client = int(input("is VIP? : (1) is VIP - (2) regular client: "))
        if new_client == 1:
            # next vip will be second (after currently next one)
            client_queue.insert(len(client_queue) -1,input("enter client id/name: "))
        else:
            client_queue.insert(0, input("enter client id/name: "))
    elif op == "2":
        if len(client_queue) > 0 :
            print("next please! ", client_queue.pop())
        else:
            print("there are no clients waiting")
    else:
        print("the que is ", len(client_queue), " clients long")
        print(client_queue)
    open = input("open (1) - closed (0): ")
