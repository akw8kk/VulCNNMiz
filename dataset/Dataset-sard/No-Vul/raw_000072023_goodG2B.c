static void FUN1()
{
    wchar_t * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memcpy_67_structType VAR2;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    VAR1[0] = VAR3''; 
    VAR2.VAR4 = VAR1;
    FUN2(VAR2);
}