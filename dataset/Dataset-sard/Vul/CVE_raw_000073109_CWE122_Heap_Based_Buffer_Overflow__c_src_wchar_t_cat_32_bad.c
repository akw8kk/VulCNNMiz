void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    {
        wchar_t * VAR1 = *VAR2;
        
        wmemset(VAR1, VAR4'', 100-1); 
        VAR1[100-1] = VAR4''; 
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR5[50] = VAR4"";
            
            wcscat(VAR5, VAR1);
            FUN2(VAR1);
            free(VAR1);
        }
    }
}