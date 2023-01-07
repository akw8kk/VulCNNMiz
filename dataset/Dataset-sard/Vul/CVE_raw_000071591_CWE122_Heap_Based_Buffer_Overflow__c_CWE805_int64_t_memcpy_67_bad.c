void FUN1()
{
    VAR1 * VAR2;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_structType VAR3;
    VAR2 = NULL;
    
    VAR2 = (VAR1 *)malloc(50*sizeof(VAR1));
    VAR3.VAR4 = VAR2;
    FUN2(VAR3);
}