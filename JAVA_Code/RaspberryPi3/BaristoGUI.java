/**
 * @file     BaristoGUI.java
 * @author   Blaze Sanders (@ROBO_BEV)
 * @email    founders@robobev.com
 * @updated  06 FEB 2018
 *
 * @version 0.1
 * @brief GUI interface for the Baristo coffee kiosk built using the NetBeans GUI builder.
 *
 * @section DESCRIPTION
 *
 * Works in parallel to the Baristo.java main driver program to keep interface running as fast as possible.
 *
 * They is A LOT of self generated code, beacuse I'm a hardware engineer :)
 */
public class BaristoGUI extends javax.swing.JFrame {

  public static boolean GUI_DEBGUG__ON = true;      //Quick on-off toggle for GUI debugging
  public static int errorCodes[];                   //Traceback error array   

  /**
   * @brief Creat new form called BaristoGUI
   * @param NONE
   */
  public BaristoGUI() {
    initComponents();
  } 

  /** This method is called from within the constructor to
   * initialize the form.
   * WARNING: Do NOT modify this code. The content of this method is
   * always regenerated by the Form Editor.
   */
   //TO-DO: private void initComponents() via self generated code


  /**
   * @brief Program starts running from here 
   * @param args[] Command line program input arguments
   */
  public static void main(String args[]) {
      /* Set the Nimbus look and feel */
      //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
      /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
       * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
       */
      try {
        javax.swing.UIManager.LookAndFeelInfo[] installedLookAndFeels=javax.swing.UIManager.getInstalledLookAndFeels();
        for (int idx=0; idx<installedLookAndFeels.length; idx++) //TO-DO: MISSING {} for FOR LOOP?
          if ("Nimbus".equals(installedLookAndFeels[idx].getName())) {
            javax.swing.UIManager.setLookAndFeel(installedLookAndFeels[idx].getClassName());
            break;
          }//END if()
      } catch (ClassNotFoundException ex) {
          java.util.logging.Logger.getLogger(BaristoGUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
      } catch (InstantiationException ex) {
          java.util.logging.Logger.getLogger(BaristoGUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
      } catch (IllegalAccessException ex) {
          java.util.logging.Logger.getLogger(BaristoGUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
      } catch (javax.swing.UnsupportedLookAndFeelException ex) {
          java.util.logging.Logger.getLogger(BaristoGUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
      }
      //</editor-fold>

     /* Create and display the form */
     java.awt.EventQueue.invokeLater(new Runnable() {
       public void run() {
         new BaristoGUI().setVisible(true);
       }
     });
  }//END main() FUNCTION
  
  // Variables declaration - do not modify 
  //TO-DO: Also self generated

}//END BaristoGUI CLASS