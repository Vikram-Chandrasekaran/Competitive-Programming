import java.util.Queue;
import java.util.*;
/**
 * @author vi
 *
 */
public class BinaryTree<E> implements IBinaryTree<E>{

	private Node<E> root;
	private int sz;
	private Node<E> nodelist[] = new Node[20];
	public BinaryTree(){
		root = null;
		sz=0;
	}
	
	
	public Node<E> getRoot() {
		// TODO Auto-generated method stub
		return root;
	}

	public void setRoot(Node<E> node) {
		// TODO Auto-generated method stub
		root = node;
		sz++;
	}
	
	public Node<E> findNode(E val){
		Node<E> temp=new Node<E>(root.getElement(),root);
		for(int i=0;i<nodelist.length;i++)
		{
			if(nodelist[i].getElement()==val)
			{
				return nodelist[i];
			}
		}	
		return null;
	}
	
	public Node<E> getNode(int pos){
		return nodelist[pos];
	}
	//inserts a node whose value is elt as a child of curnode
	
	public void insertChild(Node<E> curnode, E elt, char type) {
		Node<E> temp=new Node<E>(elt,curnode);
		if(type=='l')
			curnode.setLeft(temp);
		else
			curnode.setRight(temp);
		sz++;
	}

	public void constructTree(E[] eltArray) {
		// TODO Auto-generated method stub
		Node<E> newnode = new Node<E>(eltArray[1],null);
		root = newnode;
		nodelist[0]=null;
		nodelist[1]=root;
		for (int i=2; i<eltArray.length;i++){
			if (eltArray[i]!=null){
				
				if(i%2==0){
					System.out.println(nodelist[i/2]);
					insertChild(nodelist[i/2],eltArray[i],'l');
					nodelist[i]=nodelist[i/2].getlChild();
				}
				else{
					insertChild(nodelist[i/2],eltArray[i],'r');
					nodelist[i]=nodelist[i/2].getrChild();
				}
			}
			else nodelist[i]=null;
		}
	}

	public void printTree() {
		// TODO Auto-generated method stub
		for (int i=0;i<nodelist.length;i++)
		{
			if (nodelist[i]!=null){
				System.out.println("Elt"+nodelist[i].getElement() + "Pos"+i);
			}
			else System.out.println("Null");
		}
		
	}

	public void inorderTraverse(Node<E> node) {
		if(node.getlChild()==null && node.getrChild()==null)
		{
			System.out.print(node.getElement()+" ");
			return;
		}
		if(node.getlChild()!=null)
			inorderTraverse(node.getlChild());
		System.out.print(node.getElement()+" ");
		if(node.getrChild()!=null)
			inorderTraverse(node.getrChild());
	}

	public void preorderTraverse(Node<E> node) {
		if(node.getlChild()==null && node.getrChild()==null)
		{
			System.out.print(node.getElement()+" ");
			return;
		}
		System.out.print(node.getElement()+" ");
		if(node.getlChild()!=null)
			preorderTraverse(node.getlChild());
		if(node.getrChild()!=null)
			preorderTraverse(node.getrChild());
	}

	public void postorderTraverse(Node<E> node) {
		if(node.getlChild()==null && node.getrChild()==null)
		{
			System.out.print(node.getElement()+" ");
			return;
		}
		if(node.getlChild()!=null)
			postorderTraverse(node.getlChild());
		if(node.getrChild()!=null)
			postorderTraverse(node.getrChild());
		System.out.print(node.getElement()+" ");
	}

	public void levelorderTraverse(Node<E> node) {
		// TODO Use the queue to do the traversal. You can also use the inbuilt Queue
		Queue<Node> queue = new LinkedList<Node>();
		queue.add(node);
		while(!queue.isEmpty())
		{
			Node<E> temp=queue.remove();
			if(temp.getlChild()!=null)
				queue.add(temp.getlChild());
			if(temp.getrChild()!=null)
				queue.add(temp.getrChild());
			System.out.print(temp.getElement()+" ");
		}
		System.out.println();
	}

	public int getDepth(Node<E> node) {
		int depth=0;
		while(node.getParent()!=null)
		{
			node=node.getParent();
			depth++;
		}
		return depth;	
	}

	public int getHeight(Node<E> node) {
		int h1=0,h2=0;
		if(node.getlChild()==null && node.getrChild()==null)
			return 0;
		else
		{
			
			if(node.getlChild()!=null)
				h1=getHeight(node.getlChild());
			if(node.getrChild()!=null)
				h2=getHeight(node.getrChild());
			return 1+Math.max(h1,h2);
		}
		
	}

	public int size() {
		// TODO Auto-generated method stub
		return sz;
	}

	public boolean isEmpty() {
		// TODO Auto-generated method stub
		return (sz==0);
	}


	public boolean isProper(Node<E> p) {
		if(p.getlChild()==null && p.getrChild()==null)
			return true;
		if(p.getlChild()!=null && p.getrChild()!=null)
		{
			boolean l=isProper(p.getlChild());
			boolean r=isProper(p.getrChild());
			return (l && r );
		}
		else
			return false;
	}


	public void printExternal(Node<E> n) {
		if(n.getlChild()==null && n.getrChild()==null)
		{
			System.out.print(n.getElement()+" ");
			return;
		}
		if(n.getlChild()!=null)
			printExternal(n.getlChild());
		if(n.getrChild()!=null)
			printExternal(n.getrChild());
	}

}