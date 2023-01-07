void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        wchar_t * VAR1 = *VAR2;
        
        VAR1 = (wchar_t *)malloc(10*sizeof(wchar_t));
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR4[10+1] = VAR5;
            
            
            memcpy(VAR1, VAR4, (wcslen(VAR4) + 1) * sizeof(wchar_t));
            FUN2(VAR1);
            free(VAR1);
        }
    }
}