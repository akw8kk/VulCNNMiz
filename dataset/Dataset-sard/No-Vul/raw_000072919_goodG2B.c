static void FUN1()
{
    wchar_t * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    VAR1[0] = VAR3''; 
    VAR2.VAR4 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR5;
        {
            wchar_t VAR6[100];
            wmemset(VAR6, VAR3'', 100-1); 
            VAR6[100-1] = VAR3''; 
            
            wcscat(VAR1, VAR6);
            FUN2(VAR1);
            free(VAR1);
        }
    }
}