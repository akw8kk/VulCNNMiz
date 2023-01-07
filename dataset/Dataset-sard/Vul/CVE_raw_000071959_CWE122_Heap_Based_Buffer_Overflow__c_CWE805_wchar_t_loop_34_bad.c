void FUN1()
{
    wchar_t * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_loop_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
    VAR1[0] = VAR3''; 
    VAR2.VAR4 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR5;
        {
            size_t VAR6;
            wchar_t VAR7[100];
            wmemset(VAR7, VAR3'', 100-1); 
            VAR7[100-1] = VAR3''; 
            
            for (VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR1[VAR6] = VAR7[VAR6];
            }
            VAR1[100-1] = VAR3''; 
            FUN2(VAR1);
            free(VAR1);
        }
    }
}