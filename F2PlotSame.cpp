void F2PlotSame()
{

      TFile *f1_13A_Cumulative_Full = TFile::Open("ArSc13AmTTDCumulativeDataFullM.root");
      f1_13A_Cumulative_Full ->cd("r2");
      TGraph *F2data_13A_Cumulative_Full  = (TGraph*)gDirectory->Get("F2M");
	  F2data_13A_Cumulative_Full ->SetMarkerColor(kBlue+1);
	  F2data_13A_Cumulative_Full ->SetMarkerSize(2);
	  F2data_13A_Cumulative_Full ->SetMarkerStyle(20);
      F2data_13A_Cumulative_Full->SetLineStyle(1);
      F2data_13A_Cumulative_Full->SetLineWidth(3);

	  TFile *f1_19A_Cumulative_Full = TFile::Open("ArSc19AmTTDCumulativeDataFullM.root");
      f1_19A_Cumulative_Full ->cd("r2");
      TGraph *F2data_19A_Cumulative_Full  = (TGraph*)gDirectory->Get("F2M");
	  F2data_19A_Cumulative_Full ->SetMarkerColor(kGreen+2);
	  F2data_19A_Cumulative_Full ->SetMarkerSize(2);
	  F2data_19A_Cumulative_Full ->SetMarkerStyle(23);
      F2data_19A_Cumulative_Full->SetLineStyle(1);
      F2data_19A_Cumulative_Full->SetLineWidth(3);

      TFile *f1_30A_Cumulative_Full = TFile::Open("ArSc30AmTTDCumulativeDataFullM.root");
      f1_30A_Cumulative_Full ->cd("r2");
      TGraph *F2data_30A_Cumulative_Full  = (TGraph*)gDirectory->Get("F2M");
	  F2data_30A_Cumulative_Full ->SetMarkerColor(kOrange+8);
	  F2data_30A_Cumulative_Full ->SetMarkerSize(2);
	  F2data_30A_Cumulative_Full ->SetMarkerStyle(29);
      F2data_30A_Cumulative_Full->SetLineStyle(1);
      F2data_30A_Cumulative_Full->SetLineWidth(3);

      TFile *f1_40A_Cumulative_Full = TFile::Open("ArSc40AmTTDCumulativeDataFullM.root");
      f1_40A_Cumulative_Full ->cd("r2");
      TGraph *F2data_40A_Cumulative_Full  = (TGraph*)gDirectory->Get("F2M");
	  F2data_40A_Cumulative_Full ->SetMarkerColor(kViolet);
	  F2data_40A_Cumulative_Full ->SetMarkerSize(2);
	  F2data_40A_Cumulative_Full ->SetMarkerStyle(34);
      F2data_40A_Cumulative_Full->SetLineStyle(1);
      F2data_40A_Cumulative_Full->SetLineWidth(3);

      TFile *f1_75A_Cumulative_Full  = TFile::Open("ArSc75AmTTDCumulativeDataFullM.root");
      f1_75A_Cumulative_Full ->cd("r2");
      TGraph *F2data_75A_Cumulative_Full  = (TGraph*)gDirectory->Get("F2M");
	  F2data_75A_Cumulative_Full ->SetMarkerColor(kRed+1);
	  F2data_75A_Cumulative_Full ->SetMarkerSize(2);
	  F2data_75A_Cumulative_Full ->SetMarkerStyle(22);
      F2data_75A_Cumulative_Full->SetLineStyle(1);
      F2data_75A_Cumulative_Full->SetLineWidth(3);


      auto c_Cumulative_Full  = new TCanvas("c_Cumulative_Full ","c_Cumulative_Full ");
      c_Cumulative_Full ->SetCanvasSize(1000, 1000);
      c_Cumulative_Full ->SetWindowSize(1000, 1000);

	  TMultiGraph *mg_Cumulative_Full  = new TMultiGraph();
	  mg_Cumulative_Full ->Add(F2data_13A_Cumulative_Full );
	  mg_Cumulative_Full ->Add(F2data_19A_Cumulative_Full );
	  mg_Cumulative_Full ->Add(F2data_30A_Cumulative_Full );
	  mg_Cumulative_Full ->Add(F2data_40A_Cumulative_Full );
	  mg_Cumulative_Full ->Add(F2data_75A_Cumulative_Full );
      F2data_13A_Cumulative_Full->SetLineWidth(1);
      F2data_19A_Cumulative_Full->SetLineWidth(1);
      F2data_30A_Cumulative_Full->SetLineWidth(1);
      F2data_40A_Cumulative_Full->SetLineWidth(1);
      F2data_75A_Cumulative_Full->SetLineWidth(1);
      F2data_75A_Cumulative_Full->SetLineWidth(1);

      
      mg_Cumulative_Full ->SetTitle(";M;F_{2}(M);");
	  mg_Cumulative_Full ->SetMinimum(-0.0);
      mg_Cumulative_Full ->SetMaximum(2.5);

      mg_Cumulative_Full ->Draw("AP");
	  TLine *line_Cumulative_Full  = new TLine(-1000,1.0,23700,1.0);
      line_Cumulative_Full ->SetLineColor(40);
      line_Cumulative_Full ->SetLineWidth(3);
	  line_Cumulative_Full ->SetLineStyle(9);
      line_Cumulative_Full ->Draw();


      auto legend_Cumulative_Full  = new TLegend(.18 , .69 , .4 , .85 );
      legend_Cumulative_Full ->AddEntry(F2data_13A_Cumulative_Full ,"13#it{A} GeV/#it{c}","p");
      legend_Cumulative_Full ->AddEntry(F2data_19A_Cumulative_Full ,"19#it{A} GeV/#it{c}","p");
      legend_Cumulative_Full ->AddEntry(F2data_30A_Cumulative_Full ,"30#it{A} GeV/#it{c}","p");
      legend_Cumulative_Full ->AddEntry(F2data_40A_Cumulative_Full ,"40#it{A} GeV/#it{c}","p");
      legend_Cumulative_Full ->AddEntry(F2data_75A_Cumulative_Full ,"75#it{A} GeV/#it{c}","p");
      legend_Cumulative_Full ->Draw();
	  TLatex *text_Cumulative_Full  = new TLatex();
	  text_Cumulative_Full ->SetTextAlign(12);
      text_Cumulative_Full ->SetTextSize(0.04);
	  text_Cumulative_Full ->DrawLatexNDC(0.612, 0.92, "#bf{NA61/SHINE}");

	  TLatex *text2_Cumulative_Full  = new TLatex();
	  text2_Cumulative_Full ->SetTextAlign(12);
      text2_Cumulative_Full ->SetTextSize(0.04);
	  text2_Cumulative_Full ->DrawLatexNDC(0.285, 0.88, "#bf{0-10% Ar+Sc at 13#it{A}-75#it{A} GeV/#it{c}}");

	  TLatex *text3_Cumulative_Full  = new TLatex();
	  text3_Cumulative_Full ->SetTextAlign(12);
      text3_Cumulative_Full ->SetTextSize(0.04);
	  text3_Cumulative_Full ->DrawLatexNDC(0.17, 0.92, "#it{#color[920]{#bf{Preliminary}}}");


      c_Cumulative_Full->SaveAs(Form("/home/haradhan/ArScDataF2Result9.0/ArScSSFMsCumulativeFullM.png"));
      c_Cumulative_Full->SaveAs(Form("/home/haradhan/ArScDataF2Result9.0/ArScSSFMsCumulativeFullM.pdf"));
 

      TFile *f1_13A_Cumulative_Small = TFile::Open("ArSc13AmTTDCumulativeDataSmallM.root");
      f1_13A_Cumulative_Small ->cd("r2");
      TGraph *F2data_13A_Cumulative_Small  = (TGraph*)gDirectory->Get("F2M");
	  F2data_13A_Cumulative_Small ->SetMarkerColor(kBlue+1);
	  F2data_13A_Cumulative_Small ->SetMarkerSize(2);
	  F2data_13A_Cumulative_Small ->SetMarkerStyle(20);

	  TFile *f1_19A_Cumulative_Small = TFile::Open("ArSc19AmTTDCumulativeDataSmallM.root");
      f1_19A_Cumulative_Small ->cd("r2");
      TGraph *F2data_19A_Cumulative_Small  = (TGraph*)gDirectory->Get("F2M");
	  F2data_19A_Cumulative_Small ->SetMarkerColor(kGreen+2);
	  F2data_19A_Cumulative_Small ->SetMarkerSize(2);
	  F2data_19A_Cumulative_Small ->SetMarkerStyle(23);

	  TFile *f1_30A_Cumulative_Small = TFile::Open("ArSc30AmTTDCumulativeDataSmallM.root");
      f1_30A_Cumulative_Small ->cd("r2");
      TGraph *F2data_30A_Cumulative_Small  = (TGraph*)gDirectory->Get("F2M");
	  F2data_30A_Cumulative_Small ->SetMarkerColor(kOrange+8);
	  F2data_30A_Cumulative_Small ->SetMarkerSize(2);
	  F2data_30A_Cumulative_Small ->SetMarkerStyle(29);

      TFile *f1_40A_Cumulative_Small = TFile::Open("ArSc40AmTTDCumulativeDataSmallM.root");
      f1_40A_Cumulative_Small ->cd("r2");
      TGraph *F2data_40A_Cumulative_Small  = (TGraph*)gDirectory->Get("F2M");
	  F2data_40A_Cumulative_Small ->SetMarkerColor(kViolet);
	  F2data_40A_Cumulative_Small ->SetMarkerSize(2);
	  F2data_40A_Cumulative_Small ->SetMarkerStyle(34);

      TFile *f1_75A_Cumulative_Small  = TFile::Open("ArSc75AmTTDCumulativeDataSmallM.root");
      f1_75A_Cumulative_Small ->cd("r2");
      TGraph *F2data_75A_Cumulative_Small  = (TGraph*)gDirectory->Get("F2M");
      F2data_75A_Cumulative_Small ->SetMarkerColor(kRed+1);
	  F2data_75A_Cumulative_Small ->SetMarkerSize(2);
	  F2data_75A_Cumulative_Small ->SetMarkerStyle(22);

      auto c_Cumulative_Small  = new TCanvas("c_Cumulative_Small ","c_Cumulative_Small ");
      c_Cumulative_Small ->SetCanvasSize(1000, 1000);
      c_Cumulative_Small ->SetWindowSize(1000, 1000);

	  TMultiGraph *mg_Cumulative_Small  = new TMultiGraph();
	  mg_Cumulative_Small ->Add(F2data_13A_Cumulative_Small );
	  mg_Cumulative_Small ->Add(F2data_19A_Cumulative_Small );
	  mg_Cumulative_Small ->Add(F2data_30A_Cumulative_Small );
	  mg_Cumulative_Small ->Add(F2data_40A_Cumulative_Small );
	  mg_Cumulative_Small ->Add(F2data_75A_Cumulative_Small );

      F2data_13A_Cumulative_Small->SetLineWidth(1);
      F2data_19A_Cumulative_Small->SetLineWidth(1);
      F2data_30A_Cumulative_Small->SetLineWidth(1);
      F2data_40A_Cumulative_Small->SetLineWidth(1);
      F2data_75A_Cumulative_Small->SetLineWidth(1);
      F2data_75A_Cumulative_Small->SetLineWidth(1);
      
      mg_Cumulative_Small ->SetTitle(";M;F_{2}(M);");
	  mg_Cumulative_Small ->SetMinimum(0.0);
      mg_Cumulative_Small ->SetMaximum(2.5);
      mg_Cumulative_Small ->Draw("AP");
      mg_Cumulative_Small ->GetHistogram()->GetXaxis()->SetLimits(-50,1100);

      auto legend_Cumulative_Small  = new TLegend(.182 , .7 , .67 , .857 );
      legend_Cumulative_Small ->AddEntry(F2data_13A_Cumulative_Small ,"13#it{A} GeV/#it{c}","p");
      legend_Cumulative_Small ->AddEntry(F2data_19A_Cumulative_Small ,"19#it{A} GeV/#it{c}","p");
      legend_Cumulative_Small ->AddEntry(F2data_30A_Cumulative_Small ,"30#it{A} GeV/#it{c}","p");
      legend_Cumulative_Small ->AddEntry(F2data_40A_Cumulative_Small ,"40#it{A} GeV/#it{c}","p");
      legend_Cumulative_Small ->AddEntry(F2data_75A_Cumulative_Small ,"75#it{A} GeV/#it{c}","p");
      legend_Cumulative_Small ->Draw();
	  TLine *line_Cumulative_Small  = new TLine(-50,1.0,1100,1.0);
      line_Cumulative_Small ->SetLineColor(40);
      line_Cumulative_Small ->SetLineWidth(3);
	  line_Cumulative_Small ->SetLineStyle(9);
      line_Cumulative_Small ->Draw();

	  TLatex *text_Cumulative_Small  = new TLatex();
	  text_Cumulative_Small ->SetTextAlign(12);
      text_Cumulative_Small ->SetTextSize(0.04);
	  text_Cumulative_Small ->DrawLatexNDC(0.613, 0.92, "#bf{NA61/SHINE}");

	  TLatex *text2_Cumulative_Small  = new TLatex();
	  text2_Cumulative_Small ->SetTextAlign(12);
      text2_Cumulative_Small ->SetTextSize(0.04);
	  text2_Cumulative_Small ->DrawLatexNDC(0.29, 0.88, "#bf{0-10% Ar+Sc at 13#it{A}-75#it{A} GeV/#it{c}}");

	  TLatex *text3_Cumulative_Small  = new TLatex();
	  text3_Cumulative_Small ->SetTextAlign(12);
      text3_Cumulative_Small ->SetTextSize(0.04);
	  text3_Cumulative_Small ->DrawLatexNDC(0.17, 0.92, "#it{#color[920]{#bf{Preliminary}}}");


      c_Cumulative_Small->SaveAs(Form("/home/haradhan/ArScDataF2Result9.0/ArScSSFMsCumulativeSmallM.png"));
      c_Cumulative_Small->SaveAs(Form("/home/haradhan/ArScDataF2Result9.0/ArScSSFMsCumulativeSmallM.pdf"));

      TFile *f1_13A_nonCumulative_Full = TFile::Open("ArSc13AmTTDnonCumulativeDataFullM.root");
      f1_13A_nonCumulative_Full ->cd("r2");
      TGraph *F2data_13A_nonCumulative_Full  = (TGraph*)gDirectory->Get("F2M");
	  F2data_13A_nonCumulative_Full ->SetMarkerColor(kBlue+1);
	  F2data_13A_nonCumulative_Full ->SetMarkerSize(2);
	  F2data_13A_nonCumulative_Full ->SetMarkerStyle(20);

	  TFile *f1_19A_nonCumulative_Full = TFile::Open("ArSc19AmTTDnonCumulativeDataFullM.root");
      f1_19A_nonCumulative_Full ->cd("r2");
      TGraph *F2data_19A_nonCumulative_Full  = (TGraph*)gDirectory->Get("F2M");
	  F2data_19A_nonCumulative_Full ->SetMarkerColor(kGreen+2);
	  F2data_19A_nonCumulative_Full ->SetMarkerSize(2);
	  F2data_19A_nonCumulative_Full ->SetMarkerStyle(23);

	  TFile *f1_30A_nonCumulative_Full = TFile::Open("ArSc30AmTTDnonCumulativeDataFullM.root");
      f1_30A_nonCumulative_Full ->cd("r2");
      TGraph *F2data_30A_nonCumulative_Full  = (TGraph*)gDirectory->Get("F2M");
	  F2data_30A_nonCumulative_Full ->SetMarkerColor(kOrange+8);
	  F2data_30A_nonCumulative_Full ->SetMarkerSize(2);
	  F2data_30A_nonCumulative_Full ->SetMarkerStyle(29);

      TFile *f1_40A_nonCumulative_Full = TFile::Open("ArSc40AmTTDnonCumulativeDataFullM.root");
      f1_40A_nonCumulative_Full ->cd("r2");
      TGraph *F2data_40A_nonCumulative_Full  = (TGraph*)gDirectory->Get("F2M");
	  F2data_40A_nonCumulative_Full ->SetMarkerColor(kViolet);
	  F2data_40A_nonCumulative_Full ->SetMarkerSize(2);
	  F2data_40A_nonCumulative_Full ->SetMarkerStyle(34);

      TFile *f1_75A_nonCumulative_Full  = TFile::Open("ArSc75AmTTDnonCumulativeDataFullM.root");
      f1_75A_nonCumulative_Full ->cd("r2");
      TGraph *F2data_75A_nonCumulative_Full  = (TGraph*)gDirectory->Get("F2M");
	  F2data_75A_nonCumulative_Full ->SetMarkerColor(kRed+1);
	  F2data_75A_nonCumulative_Full ->SetMarkerSize(2);
	  F2data_75A_nonCumulative_Full ->SetMarkerStyle(22);

      auto c_nonCumulative_Full  = new TCanvas("c_nonCumulative_Full ","c_nonCumulative_Full ");
      c_nonCumulative_Full ->SetCanvasSize(1000, 1000);
      c_nonCumulative_Full ->SetWindowSize(1000, 1000);

	  TMultiGraph *mg_nonCumulative_Full  = new TMultiGraph();
	  mg_nonCumulative_Full ->Add(F2data_13A_nonCumulative_Full );
	  mg_nonCumulative_Full ->Add(F2data_19A_nonCumulative_Full );
	  mg_nonCumulative_Full ->Add(F2data_30A_nonCumulative_Full );
	  mg_nonCumulative_Full ->Add(F2data_40A_nonCumulative_Full );
     
      F2data_13A_nonCumulative_Full->SetLineWidth(1);
      F2data_19A_nonCumulative_Full->SetLineWidth(1);
      F2data_30A_nonCumulative_Full->SetLineWidth(1);
      F2data_40A_nonCumulative_Full->SetLineWidth(1);
      F2data_75A_nonCumulative_Full->SetLineWidth(1);
      F2data_75A_nonCumulative_Full->SetLineWidth(1);

      mg_nonCumulative_Full ->Add(F2data_75A_nonCumulative_Full );
	  mg_nonCumulative_Full ->SetTitle(";M;F_{2}(M);");
	  mg_nonCumulative_Full ->SetMinimum(-0.4);
      mg_nonCumulative_Full ->SetMaximum(8.4);
      mg_nonCumulative_Full ->Draw("AP");

      auto legend_nonCumulative_Full  = new TLegend(.182 , .7 , .67 , .857 );
      legend_nonCumulative_Full ->AddEntry(F2data_13A_nonCumulative_Full ,"13#it{A} GeV/#it{c}","p");
      legend_nonCumulative_Full ->AddEntry(F2data_19A_nonCumulative_Full ,"19#it{A} GeV/#it{c}","p");
      legend_nonCumulative_Full ->AddEntry(F2data_30A_nonCumulative_Full ,"30#it{A} GeV/#it{c}","p");
      legend_nonCumulative_Full ->AddEntry(F2data_40A_nonCumulative_Full ,"40#it{A} GeV/#it{c}","p");
      legend_nonCumulative_Full ->AddEntry(F2data_75A_nonCumulative_Full ,"75#it{A} GeV/#it{c}","p");
      legend_nonCumulative_Full ->Draw();
	  TLine *line_nonCumulative_Full  = new TLine(-1000,1.0,23700,1.0);
      line_nonCumulative_Full ->SetLineColor(40);
      line_nonCumulative_Full ->SetLineWidth(3);
	  line_nonCumulative_Full ->SetLineStyle(9);
      line_nonCumulative_Full ->Draw();

	  TLatex *text_nonCumulative_Full  = new TLatex();
	  text_nonCumulative_Full ->SetTextAlign(12);
      text_nonCumulative_Full ->SetTextSize(0.04);
	  text_nonCumulative_Full ->DrawLatexNDC(0.613, 0.92, "#bf{NA61/SHINE}");

	  TLatex *text2_nonCumulative_Full  = new TLatex();
	  text2_nonCumulative_Full ->SetTextAlign(12);
      text2_nonCumulative_Full ->SetTextSize(0.04);
	  text2_nonCumulative_Full ->DrawLatexNDC(0.29, 0.88, "#bf{0-10% Ar+Sc at 13#it{A}-75#it{A} GeV/#it{c}}");

	  TLatex *text3_nonCumulative_Full  = new TLatex();
	  text3_nonCumulative_Full ->SetTextAlign(12);
      text3_nonCumulative_Full ->SetTextSize(0.04);
	  text3_nonCumulative_Full ->DrawLatexNDC(0.17, 0.92, "#it{#color[920]{#bf{Preliminary}}}");


      c_nonCumulative_Full->SaveAs(Form("/home/haradhan/ArScDataF2Result9.0/ArScSSFMsnonCumulativeFullM.png"));
      c_nonCumulative_Full->SaveAs(Form("/home/haradhan/ArScDataF2Result9.0/ArScSSFMsnonCumulativeFullM.pdf"));
 

      TFile *f1_13A_nonCumulative_Small = TFile::Open("ArSc13AmTTDnonCumulativeDataSmallM.root");
      f1_13A_nonCumulative_Small ->cd("r2");
      TGraph *F2data_13A_nonCumulative_Small  = (TGraph*)gDirectory->Get("F2M");
	  F2data_13A_nonCumulative_Small ->SetMarkerColor(kBlue+1);
	  F2data_13A_nonCumulative_Small ->SetMarkerSize(2);
	  F2data_13A_nonCumulative_Small ->SetMarkerStyle(20);

	  TFile *f1_19A_nonCumulative_Small = TFile::Open("ArSc19AmTTDnonCumulativeDataSmallM.root");
      f1_19A_nonCumulative_Small ->cd("r2");
      TGraph *F2data_19A_nonCumulative_Small  = (TGraph*)gDirectory->Get("F2M");
	  F2data_19A_nonCumulative_Small ->SetMarkerColor(kGreen+2);
	  F2data_19A_nonCumulative_Small ->SetMarkerSize(2);
	  F2data_19A_nonCumulative_Small ->SetMarkerStyle(23);

	  TFile *f1_30A_nonCumulative_Small = TFile::Open("ArSc30AmTTDnonCumulativeDataSmallM.root");
      f1_30A_nonCumulative_Small ->cd("r2");
      TGraph *F2data_30A_nonCumulative_Small  = (TGraph*)gDirectory->Get("F2M");
	  F2data_30A_nonCumulative_Small ->SetMarkerColor(kOrange+8);
	  F2data_30A_nonCumulative_Small ->SetMarkerSize(2);
	  F2data_30A_nonCumulative_Small ->SetMarkerStyle(29);

      TFile *f1_40A_nonCumulative_Small = TFile::Open("ArSc40AmTTDnonCumulativeDataSmallM.root");
      f1_40A_nonCumulative_Small ->cd("r2");
      TGraph *F2data_40A_nonCumulative_Small  = (TGraph*)gDirectory->Get("F2M");
	  F2data_40A_nonCumulative_Small ->SetMarkerColor(kViolet);
	  F2data_40A_nonCumulative_Small ->SetMarkerSize(2);
	  F2data_40A_nonCumulative_Small ->SetMarkerStyle(34);

      TFile *f1_75A_nonCumulative_Small  = TFile::Open("ArSc75AmTTDnonCumulativeDataSmallM.root");
      f1_75A_nonCumulative_Small ->cd("r2");
      TGraph *F2data_75A_nonCumulative_Small  = (TGraph*)gDirectory->Get("F2M");
	  F2data_75A_nonCumulative_Small ->SetMarkerColor(kRed+1);
	  F2data_75A_nonCumulative_Small ->SetMarkerSize(2);
	  F2data_75A_nonCumulative_Small ->SetMarkerStyle(22);

      auto c_nonCumulative_Small  = new TCanvas("c_nonCumulative_Small ","c_nonCumulative_Small ");
      c_nonCumulative_Small ->SetCanvasSize(1000, 1000);
      c_nonCumulative_Small ->SetWindowSize(1000, 1000);

      TMultiGraph *mg_nonCumulative_Small  = new TMultiGraph();
	  mg_nonCumulative_Small ->Add(F2data_13A_nonCumulative_Small );
	  mg_nonCumulative_Small ->Add(F2data_19A_nonCumulative_Small );
	  mg_nonCumulative_Small ->Add(F2data_30A_nonCumulative_Small );
	  mg_nonCumulative_Small ->Add(F2data_40A_nonCumulative_Small );
	  mg_nonCumulative_Small ->Add(F2data_75A_nonCumulative_Small );
      F2data_13A_nonCumulative_Small->SetLineWidth(1);
      F2data_19A_nonCumulative_Small->SetLineWidth(1);
      F2data_30A_nonCumulative_Small->SetLineWidth(1);
      F2data_40A_nonCumulative_Small->SetLineWidth(1);
      F2data_75A_nonCumulative_Small->SetLineWidth(1);
      F2data_75A_nonCumulative_Small->SetLineWidth(1);


      
      mg_nonCumulative_Small ->SetTitle(";M;F_{2}(M);");
	  mg_nonCumulative_Small ->SetMinimum(-0.4);
      mg_nonCumulative_Small ->SetMaximum(8.4);
      mg_nonCumulative_Small ->Draw("AP");
      mg_nonCumulative_Small ->GetHistogram()->GetXaxis()->SetLimits(-50,1100);

      auto legend_nonCumulative_Small  = new TLegend(.182 , .7 , .60 , .857 );
      legend_nonCumulative_Small ->AddEntry(F2data_13A_nonCumulative_Small ,"13#it{A} GeV/#it{c}","p");
      legend_nonCumulative_Small ->AddEntry(F2data_19A_nonCumulative_Small ,"19#it{A} GeV/#it{c}","p");
      legend_nonCumulative_Small ->AddEntry(F2data_30A_nonCumulative_Small ,"30#it{A} GeV/#it{c}","p");
      legend_nonCumulative_Small ->AddEntry(F2data_40A_nonCumulative_Small ,"40#it{A} GeV/#it{c}","p");
      legend_nonCumulative_Small ->AddEntry(F2data_75A_nonCumulative_Small ,"75#it{A} GeV/#it{c}","p");
      legend_nonCumulative_Small ->Draw();
	  TLine *line_nonCumulative_Small  = new TLine(-50,1.0,1100,1.0);
      line_nonCumulative_Small ->SetLineColor(40);
      line_nonCumulative_Small ->SetLineWidth(3);
	  line_nonCumulative_Small ->SetLineStyle(9);
      line_nonCumulative_Small ->Draw();

	  TLatex *text_nonCumulative_Small  = new TLatex();
	  text_nonCumulative_Small ->SetTextAlign(12);
      text_nonCumulative_Small ->SetTextSize(0.04);
	  text_nonCumulative_Small ->DrawLatexNDC(0.613, 0.92, "#bf{NA61/SHINE}");

	  TLatex *text2_nonCumulative_Small  = new TLatex();
	  text2_nonCumulative_Small ->SetTextAlign(12);
      text2_nonCumulative_Small ->SetTextSize(0.04);
	  text2_nonCumulative_Small ->DrawLatexNDC(0.29, 0.88, "#bf{0-10% Ar+Sc at 13#it{A}-75#it{A} GeV/#it{c}}");

	  TLatex *text3_nonCumulative_Small  = new TLatex();
	  text3_nonCumulative_Small ->SetTextAlign(12);
      text3_nonCumulative_Small ->SetTextSize(0.04);
	  text3_nonCumulative_Small ->DrawLatexNDC(0.17, 0.92, "#it{#color[920]{#bf{Preliminary}}}");


      c_nonCumulative_Small->SaveAs(Form("/home/haradhan/ArScDataF2Result9.0/ArScSSFMsnonCumulativeSmallM.png"));
      c_nonCumulative_Small->SaveAs(Form("/home/haradhan/ArScDataF2Result9.0/ArScSSFMsnonCumulativeSmallM.pdf"));
 
  
}
