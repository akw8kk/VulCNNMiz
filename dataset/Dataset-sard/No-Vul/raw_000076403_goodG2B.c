static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        size_t VAR2, VAR3;
        wchar_t VAR4[100];
        wmemset(VAR4, VAR5'', 100-1);
        VAR4[100-1] = VAR5''; 
        VAR3 = wcslen(VAR4);
        
        for (VAR2 = 0; VAR2 < VAR3; VAR2++)
        {
            VAR4[VAR2] = VAR1[VAR2];
        }
        VAR4[100-1] = VAR5'';
        FUN3(VAR4);
        free(VAR1);
    }
}