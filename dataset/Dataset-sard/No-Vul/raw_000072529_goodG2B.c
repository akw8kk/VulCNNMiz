static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    goto VAR2;
VAR2:
    
    wmemset(VAR1, VAR3'', 50-1); 
    VAR1[50-1] = VAR3''; 
    {
        wchar_t VAR4[50] = VAR3"";
        size_t VAR5, VAR6;
        VAR6 = wcslen(VAR1);
        
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        {
            VAR4[VAR5] = VAR1[VAR5];
        }
        VAR4[50-1] = VAR3''; 
        FUN2(VAR1);
        free(VAR1);
    }
}