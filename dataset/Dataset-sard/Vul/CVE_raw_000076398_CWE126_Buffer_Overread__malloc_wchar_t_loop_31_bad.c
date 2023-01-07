void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
    wmemset(VAR1, VAR2'', 50-1); 
    VAR1[50-1] = VAR2''; 
    {
        wchar_t * VAR3 = VAR1;
        wchar_t * VAR1 = VAR3;
        {
            size_t VAR4, VAR5;
            wchar_t VAR6[100];
            wmemset(VAR6, VAR2'', 100-1);
            VAR6[100-1] = VAR2''; 
            VAR5 = wcslen(VAR6);
            
            for (VAR4 = 0; VAR4 < VAR5; VAR4++)
            {
                VAR6[VAR4] = VAR1[VAR4];
            }
            VAR6[100-1] = VAR2'';
            FUN2(VAR6);
            free(VAR1);
        }
    }
}