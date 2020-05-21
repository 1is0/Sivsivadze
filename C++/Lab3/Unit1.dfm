object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 262
  ClientWidth = 534
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 280
    Top = 27
    Width = 68
    Height = 13
    Caption = #1058#1080#1087' '#1089#1072#1084#1086#1083#1077#1090#1072
    Visible = False
  end
  object Label2: TLabel
    Left = 280
    Top = 54
    Width = 93
    Height = 13
    Caption = #1055#1091#1085#1082#1090' '#1085#1072#1079#1085#1072#1095#1077#1085#1080#1103
    Visible = False
  end
  object Label3: TLabel
    Left = 280
    Top = 81
    Width = 71
    Height = 13
    Caption = #1042#1088#1077#1084#1103' '#1074#1099#1083#1077#1090#1072
    Visible = False
  end
  object ComboBox1: TComboBox
    Left = 8
    Top = 24
    Width = 145
    Height = 21
    TabOrder = 0
    Text = #1042#1099#1073#1077#1088#1080#1090#1077' '#1086#1087#1094#1080#1102
    OnChange = ComboBox1Change
    Items.Strings = (
      #1044#1086#1073#1072#1074#1080#1090#1100' '#1088#1077#1081#1089
      #1042#1099#1074#1086#1076' '#1088#1077#1081#1089#1072' '#1087#1086' '#1085#1086#1084#1077#1088#1091
      #1054#1090#1084#1077#1085#1072' '#1088#1077#1081#1089#1072)
  end
  object Edit3: TEdit
    Left = 392
    Top = 78
    Width = 121
    Height = 21
    TabOrder = 1
    Visible = False
  end
  object Edit2: TEdit
    Left = 392
    Top = 51
    Width = 121
    Height = 21
    TabOrder = 2
    Visible = False
  end
  object Edit1: TEdit
    Left = 392
    Top = 24
    Width = 121
    Height = 21
    TabOrder = 3
    Visible = False
  end
  object Button1: TButton
    Left = 368
    Top = 128
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 4
    Visible = False
    OnClick = Button1Click
  end
  object ComboBox3: TComboBox
    Left = 8
    Top = 54
    Width = 201
    Height = 21
    TabOrder = 5
    Text = #1042#1099#1073#1077#1088#1080#1090#1077' '#1088#1077#1081#1089' '#1076#1083#1103' '#1091#1076#1072#1083#1077#1085#1080#1103
    Visible = False
    OnChange = ComboBox3Change
  end
  object ComboBox2: TComboBox
    Left = 8
    Top = 81
    Width = 201
    Height = 21
    TabOrder = 6
    Text = #1042#1099#1073#1077#1088#1080#1090#1077' '#1085#1086#1084#1077#1088' '#1088#1077#1081#1089#1072' '#1076#1083#1103' '#1074#1099#1074#1086#1076#1072
    Visible = False
    OnChange = ComboBox2Change
  end
  object Button2: TButton
    Left = 64
    Top = 128
    Width = 75
    Height = 25
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 7
    Visible = False
    OnClick = Button2Click
  end
end
