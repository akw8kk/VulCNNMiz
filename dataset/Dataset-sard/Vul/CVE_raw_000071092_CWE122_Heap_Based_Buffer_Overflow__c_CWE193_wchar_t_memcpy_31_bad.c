void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(10*sizeof(wchar_t));
    {
        wchar_t * VAR2 = VAR1;
        wchar_t * VAR1 = VAR2;
        {
            wchar_t VAR3[10+1] = VAR4;
            
            
            memcpy(VAR1, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
            FUN2(VAR1);
            free(VAR1);
        }
    }
}