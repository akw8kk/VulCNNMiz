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
            size_t VAR5, VAR6;
            wchar_t VAR7[100];
            wmemset(VAR7, VAR4'', 100-1);
            VAR7[100-1] = VAR4''; 
            VAR6 = wcslen(VAR7);
            
            for (VAR5 = 0; VAR5 < VAR6; VAR5++)
            {
                VAR7[VAR5] = VAR1[VAR5];
            }
            VAR7[100-1] = VAR4'';
            FUN2(VAR7);
            free(VAR1);
        }
    }
}