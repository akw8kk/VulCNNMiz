void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR2;
    VAR1 = FUN3(VAR1);
    {
        wchar_t VAR3[50] = VAR4"";
        size_t VAR5, VAR6;
        VAR6 = wcslen(VAR1);
        
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        {
            VAR3[VAR5] = VAR1[VAR5];
        }
        VAR3[50-1] = VAR4''; 
        FUN4(VAR1);
    }
}