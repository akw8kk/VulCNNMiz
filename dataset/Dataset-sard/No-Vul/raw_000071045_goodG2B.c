static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        wchar_t * VAR1 = *VAR2;
        
        VAR1 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR4[10+1] = VAR5;
            size_t VAR6, VAR7;
            VAR7 = wcslen(VAR4);
            
            
            for (VAR6 = 0; VAR6 < VAR7 + 1; VAR6++)
            {
                VAR1[VAR6] = VAR4[VAR6];
            }
            FUN2(VAR1);
            free(VAR1);
        }
    }
}