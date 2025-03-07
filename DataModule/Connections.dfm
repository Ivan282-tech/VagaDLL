object dbCon: TdbCon
  OnCreate = DataModuleCreate
  Height = 570
  Width = 517
  object LC: TSQLConnection
    ConnectionName = 'baza2006'
    DriverName = 'FIREBIRD'
    LoadParamsOnConnect = True
    LoginPrompt = False
    Params.Strings = (
      '='
      'drivername=FIREBIRD'
      'blobsize=-1'
      'commitretain=False'
      'Database=127.0.0.1/3050:C:\bus\baza\VIVA_BELA.FDB'
      'localecode=0000'
      'Password=masterkey'
      'rolename=RoleName'
      'sqldialect=3'
      'isolationlevel=ReadCommitted'
      'user_name=sysdba'
      'waitonlocks=True'
      'trim char=False'
      'ConnectionName=baza2006')
    Connected = True
    Left = 80
    Top = 40
  end
  object SC: TSQLConnection
    ConnectionName = 'bat_2006'
    DriverName = 'FIREBIRD'
    LoadParamsOnConnect = True
    LoginPrompt = False
    Params.Strings = (
      'drivername=FIREBIRD'
      'blobsize=-1'
      'commitretain=False'
      '#Database=127.0.0.1/3051:c:\bus\baza\lalafit\RESTORAN_PDV.FDB'
      'Database=127.0.0.1/3051:c:\bus\baza\kviki\kviki.fdb'
      'ConnectionName=bat_2006')
    Left = 216
    Top = 41
  end
  object Acc: TSQLConnection
    ConnectionName = 'AccessControl'
    DriverName = 'Firebird'
    LoadParamsOnConnect = True
    LoginPrompt = False
    Params.Strings = (
      'DriverName=Firebird'
      
        '#Database=localhost/3050:C:\bus\baza\Petroland\PETROLANDOO_2018.' +
        'FDB'
      'Database=127.0.0.1/3051:C:\bus\baza\adaaqua\ADAAQUA.FDB'
      'User_Name=sysdba'
      'Password=masterkey'
      'ServerCharSet='
      'SQLDialect=3'
      'ErrorResourceFile='
      'LocaleCode=0000'
      'BlobSize=-1'
      'CommitRetain=False'
      'WaitOnLocks=True'
      'IsolationLevel=ReadCommitted'
      'Trim Char=False'
      'ConnectionName=accesscontrol')
    Left = 81
    Top = 117
  end
  object dsTransaction: TDataSource
    DataSet = cdsTransaction
    Left = 376
    Top = 125
  end
  object cdsTransaction: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspTransaction'
    Left = 301
    Top = 125
  end
  object dspTransaction: TDataSetProvider
    DataSet = sdsTransaction
    Left = 226
    Top = 125
  end
  object sdsTransaction: TSQLDataSet
    CommandText = 
      'select D.MON$NEXT_TRANSACTION - D.MON$OLDEST_ACTIVE as RAZLIKA,'#13 +
      #10'       D.MON$NEXT_TRANSACTION - D.MON$OLDEST_TRANSACTION as RAZ' +
      'LIKA1,'#13#10'       D.MON$OLDEST_ACTIVE,'#13#10'       D.MON$NEXT_TRANSACTI' +
      'ON,'#13#10'       T.MON$ATTACHMENT_ID,'#13#10'       A.MON$ATTACHMENT_NAME,'#13 +
      #10'       A.MON$REMOTE_ADDRESS,'#13#10'       A.MON$TIMESTAMP,'#13#10'       A' +
      '.MON$REMOTE_PROCESS,'#13#10'       A.MON$REMOTE_HOST'#13#10'from MON$DATABAS' +
      'E D'#13#10'left join MON$TRANSACTIONS T on D.MON$OLDEST_ACTIVE = T.MON' +
      '$TRANSACTION_ID'#13#10'left join MON$ATTACHMENTS A on T.MON$ATTACHMENT' +
      '_ID = A.MON$ATTACHMENT_ID'
    MaxBlobSize = -1
    Params = <>
    Left = 152
    Top = 125
  end
  object sdsTipPlacanja: TSQLDataSet
    CommandText = 'select * from tip_placanja'
    MaxBlobSize = -1
    ParamCheck = False
    Params = <>
    SQLConnection = LC
    Left = 150
    Top = 182
    object sdsTipPlacanjaIDPLACANJA: TIntegerField
      FieldName = 'IDPLACANJA'
      Required = True
    end
    object sdsTipPlacanjaNAZIV: TStringField
      FieldName = 'NAZIV'
      Size = 30
    end
    object sdsTipPlacanjaTRGOVACKA: TSmallintField
      FieldName = 'TRGOVACKA'
    end
    object sdsTipPlacanjaKONTO: TStringField
      FieldName = 'KONTO'
      Size = 10
    end
    object sdsTipPlacanjaPODRAZUMEVANI_DOKUMENT: TIntegerField
      FieldName = 'PODRAZUMEVANI_DOKUMENT'
    end
    object sdsTipPlacanjaRAZDUZUJ_MP_AUTO: TIntegerField
      FieldName = 'RAZDUZUJ_MP_AUTO'
    end
    object sdsTipPlacanjaIDE_NA_KASU: TIntegerField
      FieldName = 'IDE_NA_KASU'
    end
  end
  object dspTipPlacanja: TDataSetProvider
    DataSet = sdsTipPlacanja
    Left = 197
    Top = 182
  end
  object cdsTipPlacanja: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspTipPlacanja'
    Left = 245
    Top = 182
    object cdsTipPlacanjaIDPLACANJA: TIntegerField
      FieldName = 'IDPLACANJA'
      Required = True
    end
    object cdsTipPlacanjaNAZIV: TStringField
      FieldName = 'NAZIV'
      Size = 30
    end
    object cdsTipPlacanjaTRGOVACKA: TSmallintField
      FieldName = 'TRGOVACKA'
    end
    object cdsTipPlacanjaKONTO: TStringField
      FieldName = 'KONTO'
      Size = 10
    end
    object cdsTipPlacanjaPODRAZUMEVANI_DOKUMENT: TIntegerField
      FieldName = 'PODRAZUMEVANI_DOKUMENT'
    end
    object cdsTipPlacanjaRAZDUZUJ_MP_AUTO: TIntegerField
      FieldName = 'RAZDUZUJ_MP_AUTO'
    end
    object cdsTipPlacanjaIDE_NA_KASU: TIntegerField
      FieldName = 'IDE_NA_KASU'
    end
  end
  object dsTipPlacanja: TDataSource
    DataSet = cdsTipPlacanja
    Left = 293
    Top = 182
  end
  object Cyr: TSQLConnection
    ConnectionName = 'SUF'
    DriverName = 'Firebird'
    LoadParamsOnConnect = True
    LoginPrompt = False
    Params.Strings = (
      'DriverName=Firebird'
      '#Database=127.0.0.1:D:\baza\soni\SONI_2022_M.'
      'Database=127.0.0.1:c:\baza\duga\DUGA_NOVA.FDB'
      'RoleName=RoleName'
      'User_Name=sysdba'
      'Password=masterkey'
      'ServerCharSet=UTF8'
      'SQLDialect=3'
      'ErrorResourceFile='
      'LocaleCode=0000'
      'BlobSize=-1'
      'CommitRetain=False'
      'WaitOnLocks=True'
      'IsolationLevel=ReadCommitted'
      'Trim Char=False'
      'UTF8=1'
      'ConnectionName=suf')
    Left = 322
    Top = 42
  end
  object spIdLogovanja: TSQLStoredProc
    MaxBlobSize = -1
    Params = <
      item
        DataType = ftInteger
        Precision = 4
        Name = 'ID'
        ParamType = ptOutput
        Size = 4
        Value = 2147
      end>
    SQLConnection = LC
    StoredProcName = 'SP_GEN_ERV_LOG_ID'
    Left = 214
    Top = 270
  end
  object sqlLog: TSQLQuery
    MaxBlobSize = -1
    Params = <
      item
        DataType = ftInteger
        Name = 'id'
        ParamType = ptInput
      end
      item
        DataType = ftInteger
        Name = 'radnik'
        ParamType = ptInput
      end
      item
        DataType = ftInteger
        Name = 'tip'
        ParamType = ptInput
      end
      item
        DataType = ftTimeStamp
        Name = 'vreme_on'
        ParamType = ptInput
      end
      item
        DataType = ftString
        Name = 'ip_adresa'
        ParamType = ptInput
      end
      item
        DataType = ftString
        Name = 'ime_pc'
        ParamType = ptInput
      end
      item
        DataType = ftString
        Name = 'mac_adresa'
        ParamType = ptInput
      end
      item
        DataType = ftString
        Name = 'projekat'
        ParamType = ptInput
      end
      item
        DataType = ftString
        Name = 'verzija'
        ParamType = ptInput
      end
      item
        DataType = ftTimeStamp
        Name = 'vreme_on'
        ParamType = ptInput
      end>
    SQL.Strings = (
      
        'INSERT INTO ERV_RADNIK_LOGOVANJE (ID, SIFRA_RADNIKA, TIP_LOGOVAN' +
        'JA, VREME, POSLATO, IP_RACUNARA, IME_RACUNARA, MAC_ADRESA, PROJE' +
        'KAT, VERZIJA, LOGON, LOGOFF)'
      
        'VALUES (:id, :radnik, :tip, :vreme_on, 0, :ip_adresa, :ime_pc, :' +
        'mac_adresa, :projekat, :verzija, :vreme_on, NULL);')
    SQLConnection = LC
    Left = 134
    Top = 270
  end
  object dsVreme: TDataSource
    DataSet = cdsVreme
    Left = 352
    Top = 394
  end
  object cdsVreme: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspVreme'
    Left = 272
    Top = 394
  end
  object dspVreme: TDataSetProvider
    DataSet = sdsVreme
    Left = 184
    Top = 394
  end
  object sdsVreme: TSQLDataSet
    CommandText = 'select current_timestamp from rdb$database'
    MaxBlobSize = -1
    Params = <>
    Left = 88
    Top = 394
  end
end
