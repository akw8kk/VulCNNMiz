static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR2;
    goto VAR3;
VAR3:
    
    wmemset(VAR1, VAR4'', 50-1); 
    VAR1[50-1] = VAR4''; 
    {
        wchar_t VAR5[50] = VAR4"";
        size_t VAR6, VAR7;
        VAR7 = wcslen(VAR1);
        
        for (VAR6 = 0; VAR6 < VAR7; VAR6++)
        {
            VAR5[VAR6] = VAR1[VAR6];
        }
        VAR5[50-1] = VAR4''; 
        FUN3(VAR1);
    }
}