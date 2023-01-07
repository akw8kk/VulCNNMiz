static void FUN1()
{
    wchar_t * VAR1;
    CWE126_Buffer_Overread__malloc_wchar_t_memcpy_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    wmemset(VAR1, VAR3'', 100-1); 
    VAR1[100-1] = VAR3''; 
    VAR2.VAR4 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR5;
        {
            wchar_t VAR6[100];
            wmemset(VAR6, VAR3'', 100-1);
            VAR6[100-1] = VAR3''; 
            
            memcpy(VAR6, VAR1, wcslen(VAR6)*sizeof(wchar_t));
            VAR6[100-1] = VAR3'';
            FUN2(VAR6);
            free(VAR1);
        }
    }
}