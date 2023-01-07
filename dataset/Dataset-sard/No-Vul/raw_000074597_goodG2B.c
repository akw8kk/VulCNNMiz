static void FUN1()
{
    wchar_t * VAR1;
    CWE124_Buffer_Underwrite__malloc_wchar_t_memcpy_34_unionType VAR2;
    VAR1 = NULL;
    {
        wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(VAR3, VAR4'', 100-1);
        VAR3[100-1] = VAR4'';
        
        VAR1 = VAR3;
    }
    VAR2.VAR5 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR6;
        {
            wchar_t VAR7[100];
            wmemset(VAR7, VAR4'', 100-1); 
            VAR7[100-1] = VAR4''; 
            
            memcpy(VAR1, VAR7, 100*sizeof(wchar_t));
            
            VAR1[100-1] = VAR4'';
            FUN2(VAR1);
            
        }
    }
}