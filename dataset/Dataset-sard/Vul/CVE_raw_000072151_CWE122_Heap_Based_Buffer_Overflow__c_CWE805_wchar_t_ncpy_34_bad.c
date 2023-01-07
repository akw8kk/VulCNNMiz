void FUN1()
{
    wchar_t * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
    VAR1[0] = VAR3''; 
    VAR2.VAR4 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR5;
        {
            wchar_t VAR6[100];
            wmemset(VAR6, VAR3'', 100-1); 
            VAR6[100-1] = VAR3''; 
            
            wcsncpy(VAR1, VAR6, 100-1);
            VAR1[100-1] = VAR3''; 
            FUN2(VAR1);
            free(VAR1);
        }
    }
}