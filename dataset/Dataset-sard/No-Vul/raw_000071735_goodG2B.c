static void FUN1()
{
    int * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67_structType VAR2;
    VAR1 = NULL;
    
    VAR1 = (int *)malloc(100*sizeof(int));
    VAR2.VAR3 = VAR1;
    FUN2(VAR2);
}