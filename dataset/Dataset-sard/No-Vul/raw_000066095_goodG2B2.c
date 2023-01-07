static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR2;
    if(FUN3())
    {
        
        wmemset(VAR1, VAR3'', 50-1); 
        VAR1[50-1] = VAR3''; 
    }
    {
        wchar_t VAR4[50] = VAR3"";
        size_t VAR5, VAR6;
        VAR6 = wcslen(VAR1);
        
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        {
            VAR4[VAR5] = VAR1[VAR5];
        }
        VAR4[50-1] = VAR3''; 
        FUN4(VAR1);
    }
}