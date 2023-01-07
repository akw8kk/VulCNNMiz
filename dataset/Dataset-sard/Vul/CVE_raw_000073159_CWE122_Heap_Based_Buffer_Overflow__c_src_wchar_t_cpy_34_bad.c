void FUN1()
{
    wchar_t * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_34_unionType VAR2;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    
    wmemset(VAR1, VAR3'', 100-1); 
    VAR1[100-1] = VAR3''; 
    VAR2.VAR4 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR5;
        {
            wchar_t VAR6[50] = VAR3"";
            
            wcscpy(VAR6, VAR1);
            FUN2(VAR1);
            free(VAR1);
        }
    }
}