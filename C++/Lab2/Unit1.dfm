object Form1: TForm1
  Left = 0
  Top = 0
  ClientHeight = 392
  ClientWidth = 658
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
  object Label1: TLabel
    Left = 440
    Top = 24
    Width = 39
    Height = 13
    Caption = 'Country'
  end
  object Label2: TLabel
    Left = 440
    Top = 46
    Width = 28
    Height = 13
    Caption = 'Brand'
  end
  object Label3: TLabel
    Left = 440
    Top = 73
    Width = 28
    Height = 13
    Caption = 'Model'
  end
  object Label4: TLabel
    Left = 440
    Top = 100
    Width = 59
    Height = 13
    Caption = 'Engine Type'
  end
  object Label5: TLabel
    Left = 440
    Top = 127
    Width = 23
    Height = 13
    Caption = 'Price'
  end
  object Label6: TLabel
    Left = 437
    Top = 154
    Width = 62
    Height = 13
    Caption = 'Consumption'
  end
  object Label7: TLabel
    Left = 437
    Top = 181
    Width = 53
    Height = 13
    Caption = 'Max Speed'
  end
  object Label8: TLabel
    Left = 437
    Top = 208
    Width = 28
    Height = 13
    Caption = '1-100'
  end
  object Image1: TImage
    Left = 8
    Top = 43
    Width = 426
    Height = 341
    Proportional = True
  end
  object ComboBox1: TComboBox
    Left = 8
    Top = 16
    Width = 145
    Height = 21
    TabOrder = 0
    Text = 'Choose Model'
    OnChange = ComboBox1Change
  end
  object Edit1: TEdit
    Left = 512
    Top = 16
    Width = 129
    Height = 21
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 512
    Top = 43
    Width = 129
    Height = 21
    TabOrder = 2
  end
  object Edit7: TEdit
    Left = 512
    Top = 178
    Width = 129
    Height = 21
    TabOrder = 3
  end
  object Edit4: TEdit
    Left = 512
    Top = 97
    Width = 129
    Height = 21
    TabOrder = 4
  end
  object Edit5: TEdit
    Left = 512
    Top = 124
    Width = 129
    Height = 21
    TabOrder = 5
  end
  object Edit6: TEdit
    Left = 512
    Top = 151
    Width = 129
    Height = 21
    TabOrder = 6
  end
  object Edit3: TEdit
    Left = 512
    Top = 70
    Width = 129
    Height = 21
    TabOrder = 7
  end
  object Edit8: TEdit
    Left = 512
    Top = 205
    Width = 129
    Height = 21
    TabOrder = 8
  end
  object ComboBox2: TComboBox
    Left = 168
    Top = 16
    Width = 169
    Height = 21
    TabOrder = 9
    Text = 'Sort by country'
    OnChange = ComboBox2Change
  end
end
