object dmVaga: TdmVaga
  Height = 418
  Width = 548
  PixelsPerInch = 120
  object dsVaga: TDataSource
    DataSet = cdsVaga
    Left = 336
    Top = 38
  end
  object cdsVaga: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspVaga'
    Left = 243
    Top = 38
  end
  object dspVaga: TDataSetProvider
    DataSet = sdsVaga
    Left = 149
    Top = 38
  end
  object sdsVaga: TSQLDataSet
    CommandText = 
      'select V.ID,'#13#10'       V.TIP_VAGE,'#13#10'       V.NAZIV_VAGE,'#13#10'       V' +
      '.ADRESA,'#13#10'       V.SIFRA_MAGACINA,'#13#10'       V.RADNIK_CHANGE,'#13#10'   ' +
      '    V.DATE_CHANGE,'#13#10'       V.AKTIVAN,'#13#10'       V.BROJ_KARAKTERA,'#13 +
      #10'       V.COMPORT,'#13#10'       V.BAUD,'#13#10'       V.PARITY,'#13#10'       V.S' +
      'TOPBITS,'#13#10'       V.DATABITS,'#13#10'       V.AUTOMATSKA_VAGA'#13#10'from VAG' +
      'A V'#13#10'where (V.ID = :ID or V.SIFRA_MAGACINA = :SM)'
    MaxBlobSize = -1
    Params = <
      item
        DataType = ftInteger
        Name = 'ID'
        ParamType = ptInput
      end
      item
        DataType = ftInteger
        Name = 'SM'
        ParamType = ptInput
      end>
    SQLConnection = SC1
    Left = 56
    Top = 38
  end
  object dsPodaci: TDataSource
    DataSet = cdsPodaci
    Left = 334
    Top = 124
  end
  object cdsPodaci: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspPodaci'
    Left = 240
    Top = 124
  end
  object dspPodaci: TDataSetProvider
    DataSet = sdsPodaci
    Left = 146
    Top = 124
  end
  object sdsPodaci: TSQLDataSet
    CommandText = 
      'select V.PLU, V.COM, V.UP, V.S1U, V.BCF, V.FLAG, V.ING, V.KOD_VA' +
      'GE'#13#10'from PROC_MP_VAGA1(:ID, :DATUM, :GODINA) V'
    MaxBlobSize = -1
    Params = <
      item
        DataType = ftInteger
        Name = 'ID'
        ParamType = ptInput
      end
      item
        DataType = ftDate
        Name = 'DATUM'
        ParamType = ptInput
      end
      item
        DataType = ftInteger
        Name = 'GODINA'
        ParamType = ptInput
      end>
    SQLConnection = SC1
    Left = 54
    Top = 124
  end
  object dsBXVaga: TDataSource
    DataSet = cdsBXVaga
    Left = 331
    Top = 190
  end
  object cdsBXVaga: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspBXVaga'
    Left = 238
    Top = 190
    object cdsBXVagaGRUPA: TWideStringField
      FieldName = 'GRUPA'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
      Size = 8
    end
    object cdsBXVagaSIFRAARTIKLA: TWideStringField
      FieldName = 'SIFRAARTIKLA'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
    end
    object cdsBXVagaNAZIVARTIKLA: TWideStringField
      FieldName = 'NAZIVARTIKLA'
      Size = 1000
    end
    object cdsBXVagaPREFIKSBK: TWideStringField
      FieldName = 'PREFIKSBK'
      Size = 8
    end
    object cdsBXVagaBARKOD: TWideStringField
      FieldName = 'BARKOD'
    end
    object cdsBXVagaJEDCENA: TFMTBCDField
      FieldName = 'JEDCENA'
      Precision = 18
      Size = 2
    end
    object cdsBXVagaJEDMERE: TWideStringField
      FieldName = 'JEDMERE'
      Size = 12
    end
    object cdsBXVagaROKTRAJANJA: TWideStringField
      FieldName = 'ROKTRAJANJA'
      Size = 12
    end
    object cdsBXVagaBRZITASTER: TIntegerField
      FieldName = 'BRZITASTER'
    end
    object cdsBXVagaSB1: TIntegerField
      FieldName = 'SB1'
    end
    object cdsBXVagaBARCODEEAN13: TWideStringField
      FieldName = 'BARCODEEAN13'
      Size = 48
    end
  end
  object dspBXVaga: TDataSetProvider
    DataSet = sdsBXVaga
    UpdateMode = upWhereKeyOnly
    Left = 144
    Top = 190
  end
  object sdsBXVaga: TSQLDataSet
    CommandText = 
      'select A.GRUPA,'#13#10'       A.SIFRAARTIKLA,'#13#10'       A.NAZIVARTIKLA,'#13 +
      #10'       A.PREFIKSBK,'#13#10'       A.BARKOD,'#13#10'       A.JEDCENA,'#13#10'     ' +
      '  A.JEDMERE,'#13#10'       A.ROKTRAJANJA,'#13#10'       A.BRZITASTER,'#13#10'     ' +
      '  A.SB1,'#13#10'       A.BARCODEEAN13'#13#10'from ARTIKLI A'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SC1
    Left = 51
    Top = 190
    object sdsBXVagaGRUPA: TWideStringField
      FieldName = 'GRUPA'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
      Size = 8
    end
    object sdsBXVagaSIFRAARTIKLA: TWideStringField
      FieldName = 'SIFRAARTIKLA'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
    end
    object sdsBXVagaNAZIVARTIKLA: TWideStringField
      FieldName = 'NAZIVARTIKLA'
      Size = 1000
    end
    object sdsBXVagaPREFIKSBK: TWideStringField
      FieldName = 'PREFIKSBK'
      Size = 8
    end
    object sdsBXVagaBARKOD: TWideStringField
      FieldName = 'BARKOD'
    end
    object sdsBXVagaJEDCENA: TFMTBCDField
      FieldName = 'JEDCENA'
      Precision = 18
      Size = 2
    end
    object sdsBXVagaJEDMERE: TWideStringField
      FieldName = 'JEDMERE'
      Size = 12
    end
    object sdsBXVagaROKTRAJANJA: TWideStringField
      FieldName = 'ROKTRAJANJA'
      Size = 12
    end
    object sdsBXVagaBRZITASTER: TIntegerField
      FieldName = 'BRZITASTER'
    end
    object sdsBXVagaSB1: TIntegerField
      FieldName = 'SB1'
    end
    object sdsBXVagaBARCODEEAN13: TWideStringField
      FieldName = 'BARCODEEAN13'
      Size = 48
    end
  end
  object dsVagaPegaz: TDataSource
    DataSet = cdsVagaPegaz
    Left = 330
    Top = 260
  end
  object cdsVagaPegaz: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspVagaPegaz'
    Left = 236
    Top = 260
  end
  object dspVagaPegaz: TDataSetProvider
    DataSet = sdsVagaPegaz
    Left = 143
    Top = 260
  end
  object sdsVagaPegaz: TSQLDataSet
    CommandText = 
      'select v.plu, v.cena, v.barkod, v.artikal from proc_mp_vaga_pega' +
      'z(:ID, :DATUM, :GODINA) V'
    MaxBlobSize = -1
    Params = <
      item
        DataType = ftInteger
        Name = 'ID'
        ParamType = ptInput
      end
      item
        DataType = ftDate
        Name = 'DATUM'
        ParamType = ptInput
      end
      item
        DataType = ftInteger
        Name = 'GODINA'
        ParamType = ptInput
      end>
    SQLConnection = SC1
    Left = 50
    Top = 260
  end
  object SC1: TSQLConnection
    ConnectionName = 'baza2006'
    DriverName = 'FIREBIRD'
    KeepConnection = False
    LoadParamsOnConnect = True
    LoginPrompt = False
    Params.Strings = (
      'DriverUnit=Data.DBXFirebird'
      
        'DriverPackageLoader=TDBXDynalinkDriverLoader,DbxCommonDriver280.' +
        'bpl'
      
        'DriverAssemblyLoader=Borland.Data.TDBXDynalinkDriverLoader,Borla' +
        'nd.Data.DbxCommonDriver,Version=24.0.0.0,Culture=neutral,PublicK' +
        'eyToken=91d62ebb5b0d1b1b'
      
        'MetaDataPackageLoader=TDBXFirebirdMetaDataCommandFactory,DbxFire' +
        'birdDriver280.bpl'
      
        'MetaDataAssemblyLoader=Borland.Data.TDBXFirebirdMetaDataCommandF' +
        'actory,Borland.Data.DbxFirebirdDriver,Version=24.0.0.0,Culture=n' +
        'eutral,PublicKeyToken=91d62ebb5b0d1b1b'
      'GetDriverFunc=getSQLDriverINTERBASE'
      'LibraryName=dbxfb.dll'
      'LibraryNameOsx=libsqlfb.dylib'
      'VendorLib=fbclient.dll'
      'VendorLibWin64=fbclient.dll'
      'VendorLibOsx=/Library/Frameworks/Firebird.framework/Firebird'
      'Role=RoleName'
      'MaxBlobSize=-1'
      'TrimChar=False'
      'ErrorResourceFile='
      'ServerCharSet='
      '='
      'drivername=FIREBIRD'
      'blobsize=-1'
      'commitretain=False'
      'Database=127.0.0.1/3050:D:\C11\baza\VIVA_BELA.FDB'
      'localecode=0000'
      'Password=masterkey'
      'rolename=RoleName'
      'sqldialect=3'
      'isolationlevel=ReadCommitted'
      'user_name=sysdba'
      'waitonlocks=True'
      'trim char=False')
    Left = 464
    Top = 250
  end
end
