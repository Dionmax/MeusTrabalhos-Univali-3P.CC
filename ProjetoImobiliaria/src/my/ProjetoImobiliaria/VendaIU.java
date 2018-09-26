/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package my.ProjetoImobiliaria;

import ImobiliariaEnum.VendaEstado;
import ClassesImobiliaria.*;
import java.util.List;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;

/**
 *
 * @author dionm
 */
public class VendaIU extends javax.swing.JFrame {

    private String modo = "navegar";

    public VendaIU() {
        initComponents();
        setLocationRelativeTo(null);

        carregarTabelaVenda();
        controleInterdace();

        setDefaultCloseOperation(0);
        this.addWindowListener(new java.awt.event.WindowAdapter() {
            @Override
            public void windowClosing(java.awt.event.WindowEvent windowEvent) {
                ImobiliariaIU.janelaVenda.show(false);
            }
        });

    }

    private void controleInterdace() {
        switch (modo) {
            case "navegar":
                btn_vend_LimpaVenda.setEnabled(false);
                btn_vend_anunciar.setEnabled(false);
                btn_vend_anunciar_ok.setEnabled(false);
                btn_vend_cancelar.setEnabled(false);
                btn_vend_finalizar.setEnabled(false);
                btn_vend_finalizar_ok.setEnabled(false);

                cons_vend_comprador.setEnabled(false);
                cons_vend_preco.setEnabled(false);
                cons_venda_CPF.setEnabled(false);

                cons_vend_comprador.setText("");
                cons_vend_preco.setText("");
                cons_venda_CPF.setText("");

                carregarTabelaVenda();
                break;
        }
    }

    private void carregarTabelaVenda() {

        DefaultTableModel modelo = new DefaultTableModel(new Object[]{"Tipo Imovel", "Nº Matricula", "Preço", "Estado", "Comprador", "Data"}, 0);

        List<Venda> venda_aux = ImobiliariaIU.imobiliaria.ListaVendas();

        venda_aux.forEach((venda) -> {
            if (venda.getEstado() != VendaEstado.Vendido) {
                modelo.addRow(new Object[]{venda.getTipoImovel(), venda.getNumeroImovel(), venda.getValor(), venda.getEstado(), "Livre", "- - -"});
            } else {
                modelo.addRow(new Object[]{venda.getTipoImovel(), venda.getNumeroImovel(),
                    venda.getValor(), venda.getEstado(), venda.getComprador(), venda.getData()});
            }
        });
        tbl_vend_registroGeral.setModel(modelo);
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        tbl_geral = new javax.swing.JTabbedPane();
        tbl_panel_vendas = new javax.swing.JPanel();
        jScrollPane2 = new javax.swing.JScrollPane();
        tbl_vend_registroGeral = new javax.swing.JTable();
        btn_vend_anunciar = new javax.swing.JButton();
        btn_vend_finalizar = new javax.swing.JButton();
        cons_vend_preco = new javax.swing.JTextField();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        cons_vend_comprador = new javax.swing.JTextField();
        btn_vend_cancelar = new javax.swing.JButton();
        btn_vend_anunciar_ok = new javax.swing.JButton();
        btn_vend_finalizar_ok = new javax.swing.JButton();
        btn_vend_LimpaVenda = new javax.swing.JButton();
        btn_venda_atualizarTabela = new javax.swing.JButton();
        cons_venda_CPF = new javax.swing.JTextField();
        jLabel1 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        tbl_geral.setToolTipText("");

        tbl_vend_registroGeral.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "Imovel", "Nº Matricula", "Valor", "Estado", "Comprador", "Data"
            }
        ) {
            Class[] types = new Class [] {
                java.lang.String.class, java.lang.String.class, java.lang.String.class, java.lang.String.class, java.lang.String.class, java.lang.Object.class
            };
            boolean[] canEdit = new boolean [] {
                false, false, false, false, false, false
            };

            public Class getColumnClass(int columnIndex) {
                return types [columnIndex];
            }

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        tbl_vend_registroGeral.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                tbl_vend_registroGeralMouseClicked(evt);
            }
        });
        jScrollPane2.setViewportView(tbl_vend_registroGeral);
        if (tbl_vend_registroGeral.getColumnModel().getColumnCount() > 0) {
            tbl_vend_registroGeral.getColumnModel().getColumn(0).setResizable(false);
            tbl_vend_registroGeral.getColumnModel().getColumn(1).setResizable(false);
            tbl_vend_registroGeral.getColumnModel().getColumn(2).setResizable(false);
            tbl_vend_registroGeral.getColumnModel().getColumn(3).setResizable(false);
            tbl_vend_registroGeral.getColumnModel().getColumn(4).setResizable(false);
            tbl_vend_registroGeral.getColumnModel().getColumn(5).setResizable(false);
        }

        btn_vend_anunciar.setText("Anunciar");
        btn_vend_anunciar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_vend_anunciarActionPerformed(evt);
            }
        });

        btn_vend_finalizar.setText("Finalizar");
        btn_vend_finalizar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_vend_finalizarActionPerformed(evt);
            }
        });

        jLabel2.setText("Preço:");

        jLabel3.setText("Comprador:");

        btn_vend_cancelar.setForeground(new java.awt.Color(255, 0, 0));
        btn_vend_cancelar.setText("Cancelar");
        btn_vend_cancelar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_vend_cancelarActionPerformed(evt);
            }
        });

        btn_vend_anunciar_ok.setText("OK");
        btn_vend_anunciar_ok.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_vend_anunciar_okActionPerformed(evt);
            }
        });

        btn_vend_finalizar_ok.setText("OK");
        btn_vend_finalizar_ok.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_vend_finalizar_okActionPerformed(evt);
            }
        });

        btn_vend_LimpaVenda.setForeground(new java.awt.Color(255, 0, 0));
        btn_vend_LimpaVenda.setText("Limpar Venda");
        btn_vend_LimpaVenda.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_vend_LimpaVendaActionPerformed(evt);
            }
        });

        btn_venda_atualizarTabela.setText("Atualizar Tabela");
        btn_venda_atualizarTabela.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_venda_atualizarTabelaActionPerformed(evt);
            }
        });

        jLabel1.setText("CPF:");

        javax.swing.GroupLayout tbl_panel_vendasLayout = new javax.swing.GroupLayout(tbl_panel_vendas);
        tbl_panel_vendas.setLayout(tbl_panel_vendasLayout);
        tbl_panel_vendasLayout.setHorizontalGroup(
            tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(tbl_panel_vendasLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jScrollPane2, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE)
                    .addGroup(tbl_panel_vendasLayout.createSequentialGroup()
                        .addGroup(tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addGroup(tbl_panel_vendasLayout.createSequentialGroup()
                                .addComponent(btn_vend_anunciar)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(jLabel2))
                            .addGroup(tbl_panel_vendasLayout.createSequentialGroup()
                                .addGroup(tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(btn_vend_finalizar, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(btn_vend_cancelar))
                                .addGap(18, 18, 18)
                                .addGroup(tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                    .addComponent(jLabel3)
                                    .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE))))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addGroup(tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(tbl_panel_vendasLayout.createSequentialGroup()
                                .addComponent(cons_vend_preco, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(18, 18, 18)
                                .addComponent(btn_vend_anunciar_ok))
                            .addGroup(tbl_panel_vendasLayout.createSequentialGroup()
                                .addGroup(tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                                    .addComponent(cons_venda_CPF, javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(cons_vend_comprador, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 80, Short.MAX_VALUE))
                                .addGap(18, 18, 18)
                                .addComponent(btn_vend_finalizar_ok)))
                        .addGap(0, 112, Short.MAX_VALUE))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, tbl_panel_vendasLayout.createSequentialGroup()
                        .addComponent(btn_vend_LimpaVenda)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(btn_venda_atualizarTabela)
                        .addGap(16, 16, 16)))
                .addContainerGap())
        );
        tbl_panel_vendasLayout.setVerticalGroup(
            tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, tbl_panel_vendasLayout.createSequentialGroup()
                .addGap(32, 32, 32)
                .addGroup(tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btn_vend_anunciar)
                    .addComponent(cons_vend_preco, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel2)
                    .addComponent(btn_vend_anunciar_ok))
                .addGap(30, 30, 30)
                .addGroup(tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btn_vend_finalizar)
                    .addComponent(jLabel3)
                    .addComponent(cons_vend_comprador, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_vend_finalizar_ok))
                .addGroup(tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(tbl_panel_vendasLayout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 14, Short.MAX_VALUE)
                        .addComponent(btn_vend_cancelar)
                        .addGap(18, 18, 18))
                    .addGroup(tbl_panel_vendasLayout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(cons_venda_CPF, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabel1))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))
                .addComponent(jScrollPane2, javax.swing.GroupLayout.PREFERRED_SIZE, 144, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addGroup(tbl_panel_vendasLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btn_venda_atualizarTabela)
                    .addComponent(btn_vend_LimpaVenda))
                .addGap(15, 15, 15))
        );

        tbl_geral.addTab("Vendas", tbl_panel_vendas);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(tbl_geral)
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(tbl_geral, javax.swing.GroupLayout.PREFERRED_SIZE, 391, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(19, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void tbl_vend_registroGeralMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_tbl_vend_registroGeralMouseClicked
        int indice = tbl_vend_registroGeral.getSelectedRow();
        List<Venda> venda_aux = ImobiliariaIU.imobiliaria.ListaVendas();

        if (venda_aux.get(indice).getEstado() == VendaEstado.Disponivel) {
            btn_vend_anunciar.setEnabled(true);
        } else if (venda_aux.get(indice).getEstado() == VendaEstado.Vender) {
            btn_vend_finalizar.setEnabled(true);
        } else if (venda_aux.get(indice).getEstado() == VendaEstado.Vendido) {
            cons_vend_comprador.setText(venda_aux.get(indice).getComprador());
        }

        btn_vend_LimpaVenda.setEnabled(true);
    }//GEN-LAST:event_tbl_vend_registroGeralMouseClicked

    private void btn_vend_anunciarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_vend_anunciarActionPerformed
        btn_vend_anunciar.setEnabled(false);
        btn_vend_anunciar_ok.setEnabled(true);
        cons_vend_preco.setEnabled(true);
    }//GEN-LAST:event_btn_vend_anunciarActionPerformed

    private void btn_vend_finalizarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_vend_finalizarActionPerformed
        btn_vend_finalizar.setEnabled(false);
        cons_vend_comprador.setEnabled(true);
        cons_venda_CPF.setEnabled(true);
        btn_vend_finalizar_ok.setEnabled(true);
    }//GEN-LAST:event_btn_vend_finalizarActionPerformed

    private void btn_vend_cancelarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_vend_cancelarActionPerformed
        modo = "navegar";
        controleInterdace();
    }//GEN-LAST:event_btn_vend_cancelarActionPerformed

    private void btn_vend_anunciar_okActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_vend_anunciar_okActionPerformed
        int indice = tbl_vend_registroGeral.getSelectedRow();
        String valor_aux = cons_vend_preco.getText();
        List<Venda> venda_aux = ImobiliariaIU.imobiliaria.ListaVendas();

        if (indice >= 0 && indice < venda_aux.size()) {

            if (valor_aux != "") {
                if (venda_aux.get(indice).getEstado() == VendaEstado.Disponivel) {
                    venda_aux.get(indice).vender(valor_aux);
                }
            }

            modo = "navegar";

            cons_vend_preco.setText("");
            carregarTabelaVenda();
            controleInterdace();
        }
    }//GEN-LAST:event_btn_vend_anunciar_okActionPerformed

    private void btn_vend_finalizar_okActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_vend_finalizar_okActionPerformed
        int indice = tbl_vend_registroGeral.getSelectedRow();
        String comprador = "";
        List<Venda> venda_aux = ImobiliariaIU.imobiliaria.ListaVendas();

        if (indice >= 0 && indice < venda_aux.size()) {
            if (!"".equals(cons_vend_comprador.getText())) {
                venda_aux.get(indice).finalizar(cons_vend_comprador.getText(), cons_venda_CPF.getText());
            } else {
                JOptionPane.showMessageDialog(rootPane, "Nome inválido", "Error!", JOptionPane.ERROR_MESSAGE);
            }
        }
        controleInterdace();
    }//GEN-LAST:event_btn_vend_finalizar_okActionPerformed

    private void btn_vend_LimpaVendaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_vend_LimpaVendaActionPerformed
        int indice = tbl_vend_registroGeral.getSelectedRow();
        List<Venda> venda_aux = ImobiliariaIU.imobiliaria.ListaVendas();

        if (indice >= 0 && indice < venda_aux.size()) {
            venda_aux.remove(venda_aux.get(indice));
        }
        controleInterdace();
    }//GEN-LAST:event_btn_vend_LimpaVendaActionPerformed

    private void btn_venda_atualizarTabelaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_venda_atualizarTabelaActionPerformed
        carregarTabelaVenda();
        controleInterdace();
    }//GEN-LAST:event_btn_venda_atualizarTabelaActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(VendaIU.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(VendaIU.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(VendaIU.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(VendaIU.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new VendaIU().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btn_vend_LimpaVenda;
    private javax.swing.JButton btn_vend_anunciar;
    private javax.swing.JButton btn_vend_anunciar_ok;
    private javax.swing.JButton btn_vend_cancelar;
    private javax.swing.JButton btn_vend_finalizar;
    private javax.swing.JButton btn_vend_finalizar_ok;
    private javax.swing.JButton btn_venda_atualizarTabela;
    private javax.swing.JTextField cons_vend_comprador;
    private javax.swing.JTextField cons_vend_preco;
    private javax.swing.JTextField cons_venda_CPF;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JTabbedPane tbl_geral;
    private javax.swing.JPanel tbl_panel_vendas;
    private javax.swing.JTable tbl_vend_registroGeral;
    // End of variables declaration//GEN-END:variables
}