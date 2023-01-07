static void FUN1()
{
    wchar_t * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
    VAR2.VAR3 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR4;
        {
            wchar_t VAR5[10+1] = VAR6;
            size_t VAR7, VAR8;
            VAR8 = wcslen(VAR5);
            
            
            for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
            {
                VAR1[VAR7] = VAR5[VAR7];
            }
            FUN2(VAR1);
            free(VAR1);
        }
    }
}