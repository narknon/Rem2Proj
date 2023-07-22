#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EEncodingOptions.h"
#include "JsonCsvToDataTableToStructBPLibrary.generated.h"

class UDataTable;
class UScriptStruct;
class UStruct;

UCLASS(Blueprintable)
class UJsonCsvToDataTableToStructBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UJsonCsvToDataTableToStructBPLibrary();
    UFUNCTION(BlueprintCallable)
    static bool WriteDataTableToJson(UDataTable* InDataTable, FString& ExportedText);
    
    UFUNCTION(BlueprintCallable)
    static bool WriteDataTableToCsv(UDataTable* InDataTable, FString& ExportedText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString UrlEncode(const FString& UnencodedString);
    
    UFUNCTION(BlueprintCallable)
    static bool StructToJsonObjectStringV2(FString& OutJsonString, const UStruct* Struct);
    
    UFUNCTION(BlueprintCallable)
    static bool StructToJsonObjectString(FString& OutJsonString, const UScriptStruct* Struct);
    
    UFUNCTION(BlueprintCallable)
    static bool StructArrayToJsonObjectStringV2(FString& OutJsonString, const TArray<UScriptStruct*> StructArray);
    
    UFUNCTION(BlueprintCallable)
    static bool StructArrayToJsonObjectString(FString& OutJsonString, const TArray<UScriptStruct*> StructArray);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveStringToFile(const FString& FileAbsolutePath, const FString& Content, EEncodingOptions EncodingOptions);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveDataTableRow(UDataTable* InDataTable, const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* ReadJsonToDataTable(const FString& InData, UScriptStruct* TableType);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* ReadCsvToDataTable(const FString& InData, UScriptStruct* TableType);
    
    UFUNCTION(BlueprintCallable)
    static FString PasteMessageFromClipboard();
    
    UFUNCTION(BlueprintCallable)
    static bool LoadFileToString(const FString& FileAbsolutePath, FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static bool JsonStringToStructV2(const FString& InJsonString, UStruct*& Struct);
    
    UFUNCTION(BlueprintCallable)
    static bool JsonStringToStructArrayV2(const FString& InJsonString, TArray<UScriptStruct*>& StructArray);
    
    UFUNCTION(BlueprintCallable)
    static bool JsonStringToStructArray(const FString& InJsonString, TArray<FTableRowBase>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool JsonStringToStruct(const FString& InJsonString, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDataTableFirstRow(UDataTable* InDataTable, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* CreateDataTable(const FString& InDataTableName, UScriptStruct* TableType);
    
    UFUNCTION(BlueprintCallable)
    static void CopyMessageToClipboard(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static bool ClearDataTable(UDataTable* InDataTable);
    
    UFUNCTION(BlueprintCallable)
    static bool AddDataTableRow(UDataTable* InDataTable, const FName RowName, const FTableRowBase& OutRow);
    
};

