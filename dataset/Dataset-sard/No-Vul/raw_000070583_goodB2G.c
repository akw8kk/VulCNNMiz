static void FUN1()
{
    int VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_structType VAR2;
    
    VAR1 = -1;
    
    fscanf(stdin, "", &VAR1);
    VAR2.VAR3 = VAR1;
    FUN2(VAR2);
}