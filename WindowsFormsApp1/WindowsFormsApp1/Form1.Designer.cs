namespace WindowsFormsApp1
{
    partial class Form1
    {
        /// <summary>
        /// Variable del diseñador necesaria.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        /// <param name="disposing">true si los recursos administrados se deben desechar; false en caso contrario.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código generado por el Diseñador de Windows Forms

        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido de este método con el editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.txbUno = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.txbDos = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.txbResultado = new System.Windows.Forms.TextBox();
            this.btnSuma = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // txbUno
            // 
            this.txbUno.Location = new System.Drawing.Point(123, 95);
            this.txbUno.Name = "txbUno";
            this.txbUno.Size = new System.Drawing.Size(163, 20);
            this.txbUno.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(41, 98);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(65, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "Numero uno";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(41, 154);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(64, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "Numero dos";
            // 
            // txbDos
            // 
            this.txbDos.Location = new System.Drawing.Point(123, 151);
            this.txbDos.Name = "txbDos";
            this.txbDos.Size = new System.Drawing.Size(163, 20);
            this.txbDos.TabIndex = 2;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(41, 208);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(55, 13);
            this.label3.TabIndex = 5;
            this.label3.Text = "Resultado";
            // 
            // txbResultado
            // 
            this.txbResultado.Location = new System.Drawing.Point(123, 205);
            this.txbResultado.Name = "txbResultado";
            this.txbResultado.Size = new System.Drawing.Size(163, 20);
            this.txbResultado.TabIndex = 4;
            // 
            // btnSuma
            // 
            this.btnSuma.Location = new System.Drawing.Point(127, 299);
            this.btnSuma.Name = "btnSuma";
            this.btnSuma.Size = new System.Drawing.Size(67, 35);
            this.btnSuma.TabIndex = 6;
            this.btnSuma.Text = "Sumar";
            this.btnSuma.UseVisualStyleBackColor = true;
            this.btnSuma.Click += new System.EventHandler(this.btnSuma_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(329, 450);
            this.Controls.Add(this.btnSuma);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.txbResultado);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txbDos);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.txbUno);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txbUno;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txbDos;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txbResultado;
        private System.Windows.Forms.Button btnSuma;
    }
}

