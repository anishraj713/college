//  import java.awt.*;    
  
// // extending Frame class to our class AWTExample1  
// public class Awt extends Frame {    
  
//    // initializing using constructor  
//    Awt() {  
  
//       // creating a button   
//       Button b = new Button("Click Me!!");  
  
//       // setting button position on screen  
//       b.setBounds(30,100,80,30);  
  
//       // adding button into frame    
//       add(b);  
  
//       // frame size 300 width and 300 height    
//       setSize(300,300);  
  
//       // setting the title of Frame  
//       setTitle("This is our basic AWT example");   
          
//       // no layout manager   
//       setLayout(null);   
  
//       // now frame will be visible, by default it is not visible    
//       setVisible(true);  
// }    
  
// // main method  
// public static void main(String args[]) {   
  
// // creating instance of Frame class   
// Awt f = new Awt();    
  
// }  
// }

// /////////////////////////////////////////
import java.awt.*;      
public class Awt extends Frame {    
Awt() {  
Button b = new Button("Click Me!!");  
b.setBounds(30,100,80,30);  
add(b);  
setSize(300,300);  
setTitle("This is our basic AWT example");   
setLayout(null);   
setVisible(true);  
}    
public static void main(String args[]) {   
Awt f = new Awt();    
}  
}