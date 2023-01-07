static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        wchar_t * VAR1 = *VAR2;
        
        VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(VAR1, VAR4'', 100-1); 
        VAR1[100-1] = VAR4''; 
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR5[100];
            wmemset(VAR5, VAR4'', 100-1);
            VAR5[100-1] = VAR4''; 
            
            memcpy(VAR5, VAR1, wcslen(VAR5)*sizeof(wchar_t));
            VAR5[100-1] = VAR4'';
            FUN2(VAR5);
            free(VAR1);
        }
    }
}