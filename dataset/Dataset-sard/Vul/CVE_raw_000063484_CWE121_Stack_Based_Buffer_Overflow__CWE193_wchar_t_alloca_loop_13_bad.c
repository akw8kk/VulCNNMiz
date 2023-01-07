void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    if(VAR4==5)
    {
        
        VAR1 = VAR2;
        VAR1[0] = VAR5''; 
    }
    {
        wchar_t VAR6[10+1] = VAR7;
        size_t VAR8, VAR9;
        VAR9 = wcslen(VAR6);
        
        
        for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
        {
            VAR1[VAR8] = VAR6[VAR8];
        }
        FUN3(VAR1);
    }
}