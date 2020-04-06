object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Figures'
  ClientHeight = 502
  ClientWidth = 842
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 8
    Top = 8
    Width = 826
    Height = 217
  end
  object Label1: TLabel
    Left = 8
    Top = 253
    Width = 60
    Height = 13
    Caption = #1058#1080#1087' '#1092#1080#1075#1091#1088#1099
  end
  object Label2: TLabel
    Left = 8
    Top = 313
    Width = 3
    Height = 13
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMenuHighlight
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 528
    Top = 256
    Width = 36
    Height = 13
    Caption = #1056#1072#1076#1080#1091#1089
  end
  object Label4: TLabel
    Left = 528
    Top = 310
    Width = 138
    Height = 13
    Caption = #1057#1090#1086#1088#1086#1085#1072' 1 '#1087#1088#1103#1084#1086#1091#1075#1086#1083#1100#1085#1080#1082#1072
  end
  object Label5: TLabel
    Left = 528
    Top = 356
    Width = 141
    Height = 13
    Caption = #1057#1090#1086#1088#1086#1085#1072' 2 '#1087#1088#1103#1084#1086#1091#1075#1086#1083#1100#1085#1080#1082#1072' '
  end
  object Label6: TLabel
    Left = 528
    Top = 416
    Width = 95
    Height = 13
    Caption = #1057#1090#1086#1088#1086#1085#1072' '#1082#1074#1072#1076#1088#1072#1090#1072
  end
  object Button1: TButton
    Left = 208
    Top = 270
    Width = 113
    Height = 25
    Caption = #1055#1086#1082#1072#1079#1072#1090#1100
    TabOrder = 0
    OnClick = Button1Click
  end
  object ComboBox1: TComboBox
    Left = 8
    Top = 272
    Width = 145
    Height = 21
    TabOrder = 1
  end
  object Button2: TButton
    Left = 208
    Top = 301
    Width = 113
    Height = 25
    Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1094#1077#1085#1090#1088' '#1084#1072#1089#1089
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 208
    Top = 332
    Width = 113
    Height = 25
    Caption = #1055#1083#1086#1097#1072#1076#1100
    TabOrder = 3
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 360
    Top = 301
    Width = 113
    Height = 25
    Caption = #1055#1077#1088#1077#1084#1077#1097#1077#1085#1080#1077
    TabOrder = 4
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 360
    Top = 332
    Width = 113
    Height = 25
    Caption = #1054#1073#1085#1091#1083#1077#1085#1080#1077
    TabOrder = 5
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 208
    Top = 363
    Width = 113
    Height = 25
    Caption = #1055#1077#1088#1080#1084#1077#1090#1088
    TabOrder = 6
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 360
    Top = 270
    Width = 113
    Height = 25
    Caption = #1062#1077#1085#1090#1088' '#1084#1072#1089#1089
    TabOrder = 7
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 360
    Top = 363
    Width = 113
    Height = 25
    Caption = #1052#1072#1096#1090#1072#1073#1080#1088#1086#1074#1072#1085#1080#1077
    TabOrder = 8
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 687
    Top = 270
    Width = 75
    Height = 25
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
    TabOrder = 9
    OnClick = Button9Click
  end
  object Edit1: TEdit
    Left = 528
    Top = 272
    Width = 85
    Height = 21
    TabOrder = 10
  end
  object Edit2: TEdit
    Left = 528
    Top = 329
    Width = 85
    Height = 21
    TabOrder = 11
  end
  object Button10: TButton
    Left = 687
    Top = 351
    Width = 75
    Height = 25
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
    TabOrder = 12
    OnClick = Button10Click
  end
  object Edit3: TEdit
    Left = 528
    Top = 379
    Width = 85
    Height = 21
    TabOrder = 13
  end
  object Edit4: TEdit
    Left = 528
    Top = 435
    Width = 85
    Height = 21
    TabOrder = 14
  end
  object Button11: TButton
    Left = 687
    Top = 433
    Width = 75
    Height = 25
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
    TabOrder = 15
    OnClick = Button11Click
  end
  object Button12: TButton
    Left = 360
    Top = 430
    Width = 113
    Height = 25
    Caption = #1055#1086#1074#1086#1088#1086#1090
    TabOrder = 16
    OnClick = Button12Click
  end
  object TimerAll: TTimer
    Enabled = False
    Interval = 300
    OnTimer = TimerAllTimer
    Left = 8
    Top = 368
  end
end
