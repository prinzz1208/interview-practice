//How do you sort a linked list in Java? 
import java.util.LinkedList;
import java.util.Collections;
class Node{
	int val;
	Node next;
	public Node(){}
}
class q23{
	public static void main(String[] args){
		Node head = null;
		Node temp = null;
		int a[]={5,3,2,1,4};
		for (int i:a)
		{
			Node p = new Node();
			p.val = i;
			p.next = null;
			if (head == null){
				head = p;
				temp = p;
			}else{
				temp.next = p;
				temp = p;
			}
		}
		temp = head;
		while (temp != null){
			System.out.println(temp.val);
			temp = temp.next;	
		}
		LinkedList<Integer> l=new LinkedList();
		l.add(5); l.add(3); l.add(1);l.add(2);l.add(0);
		Collections.sort(l);
		System.out.println(l);
	}
}
