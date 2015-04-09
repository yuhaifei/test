
1 import java.awt.Color; 
2 import java.awt.Graphics; 
3 import java.awt.Graphics2D; 
4 import java.awt.event.MouseEvent; 
5 import java.awt.event.MouseMotionListener; 
6 import javax.swing.rame; 
7 import javax.swing.pan; 
8 public class TestMoveString { 
9 	private static int x=200; 
10 	private static int y=300; 
11 	public static void main(String[] args) { 
12 				final pan jp=new pan(){ 
13 			public void paint(Graphics g){ 
14 				Graphics2D g2=(Graphics2D) g; 
15 				g2.setColor(Color.white); 
16 				g2.fillRect(0, 0, 500, 400); 
17 				g2.setColor(Color.black); 
18 				g2.drawString("helloWorld", x, y); 
19 			} 
20 		}; 
21 		jp.addMouseMotionListener(new MouseMotionListener() { 
22 			@Override 
23 			public void mouseMoved(MouseEvent e) { 
24 			} 
25 			@Override 
26 			public void mouseDragged(MouseEvent e) { 
27 				// TODO Auto-generated method stub 
28 				x=e.getX(); 
29 				y=e.getY(); 
30 				jp.repaint();	 
31 			} 
32 		}); 
33 		jf.add(jp); 
34 		jf.setDefaultCloseOperation(rame.EXIT_ON_CLOSE); 
35 		jf.setSize(500, 400); 
36 		jf.setVisible(true); 
37 	} 
38 } 
 



 
   

Status
 API
 Training
 Shop
 Blog
 About
 
