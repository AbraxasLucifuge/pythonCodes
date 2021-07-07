#!/usr/bin/python3

class node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class dll:
    def __init__(self):
        self.head = None;
    def addhead(self,data):
        self.head = node(data)
    def addnode(self, data):
        tmp = self.head
        while(tmp.next != None):
            tmp = tmp.next
        tmp.next = node(data)
        prev_node = tmp
        tmp = tmp.next
        tmp.prev = prev_node
    def printlist(self):
        tmp = self.head
        while(tmp != None):
            print(tmp.data, end = " ")
            tmp = tmp.next
    def printrev(self):
        tmp = self.head
        while(tmp.next != None):
            tmp = tmp.next
        while(tmp):
            print(tmp.data, end = " ")
            tmp = tmp.prev
    def deletenode(self,index):
        if index == 1:
            tmp = self.head
            self.head = tmp.next
            self.head.prev = None
            tmp.next = None
        else:
            cnt = 1
            tmp = self.head
            while(tmp != None and cnt < index-1):
                tmp = tmp.next
                cnt += 1
            cur = tmp.next
            cur.next.prev = cur.prev
            tmp.next = cur.next
            cur.prev = None
            cur.next = None

d = dll()
d.addhead(2)
d.addnode(3)
d.addnode(4)
d.addnode(5)
d.addnode(6)
d.deletenode(3)
d.printlist()
d.printrev()

