#!/usr/bin/python3

class node:
    def __init__(self,data):
        self.data = data
        self.next = None

class circular_list:
    def __init__(self):
        self.head = None
    def makehead(self, data):
        self.head = node(data)
        self.head.next = self.head
    def addnode(self, data):
        tmp = self.head
        while(tmp.next != self.head):
            tmp = tmp.next
        tmp.next = node(data)
        cur = tmp.next
        cur.next = self.head
    def printlist(self):
        if(self.head):
            print(self.head.data, end = " ")
        tmp = self.head.next
        while(tmp != self.head):
            print(tmp.data, end = " ")
            tmp = tmp.next
    def deletenode(self, index):
        tmp = self.head
        if(index == 1):
            while(tmp.next != self.head):
                tmp = tmp.next
            head = tmp.next
            tmp.next = head.next
            self.head = tmp.next
            head.next = None
        else:
            cnt = 1
            if(index > 2):
                cnt += 1
                tmp = tmp.next
                while(tmp != self.head and cnt < index-1):
                    tmp = tmp.next
                    cnt+=1
            cur = tmp.next
            tmp.next = cur.next
            cur.next = None
    def reverse(self):
        prev = self.head
        tmp = self.head.next
        while(tmp != self.head):
            cur = tmp.next
            tmp.next = prev
            prev = tmp
            tmp = cur
        tmp.next = prev
        self.head = prev

cll = circular_list()
cll.makehead(1)
cll.addnode(2)
cll.addnode(3)
cll.addnode(4)
cll.addnode(5)
cll.addnode(6)
cll.deletenode(6)
cll.printlist()
cll.reverse()
cll.printlist()


        
