object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form'
  ClientHeight = 601
  ClientWidth = 880
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 24
    Top = 568
    Width = 75
    Height = 25
    Caption = 'Spawn'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 120
    Top = 568
    Width = 75
    Height = 25
    Caption = 'Move'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 208
    Top = 568
    Width = 75
    Height = 25
    Caption = 'Light'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 296
    Top = 568
    Width = 75
    Height = 25
    Caption = 'Door'
    TabOrder = 3
    OnClick = Button4Click
  end
end
