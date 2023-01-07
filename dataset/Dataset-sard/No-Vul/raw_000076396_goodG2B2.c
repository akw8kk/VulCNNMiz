static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    VAR2 = 1; 
    VAR1 = FUN2(VAR1);
    {
        size_t VAR3, VAR4;
        wchar_t VAR5[100];
        wmemset(VAR5, VAR6'', 100-1);
        VAR5[100-1] = VAR6''; 
        VAR4 = wcslen(VAR5);
        
        for (VAR3 = 0; VAR3 < VAR4; VAR3++)
        {
            VAR5[VAR3] = VAR1[VAR3];
        }
        VAR5[100-1] = VAR6'';
        FUN3(VAR5);
        free(VAR1);
    }
}