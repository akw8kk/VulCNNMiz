void FUN1()
{
    wchar_t * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_67_structType VAR2;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(10*sizeof(wchar_t));
    VAR2.VAR3 = VAR1;
    FUN2(VAR2);
}