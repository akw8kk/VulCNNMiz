void FUN1()
{
    wchar_t * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(10*sizeof(wchar_t));
    VAR2.VAR3 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR4;
        {
            wchar_t VAR5[10+1] = VAR6;
            
            wcscpy(VAR1, VAR5);
            FUN2(VAR1);
            free(VAR1);
        }
    }
}