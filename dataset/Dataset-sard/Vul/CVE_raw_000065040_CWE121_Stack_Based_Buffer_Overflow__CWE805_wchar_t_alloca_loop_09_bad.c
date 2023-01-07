void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    if(VAR4)
    {
        
        VAR1 = VAR2;
        VAR1[0] = VAR5''; 
    }
    {
        size_t VAR6;
        wchar_t VAR7[100];
        wmemset(VAR7, VAR5'', 100-1); 
        VAR7[100-1] = VAR5''; 
        
        for (VAR6 = 0; VAR6 < 100; VAR6++)
        {
            VAR1[VAR6] = VAR7[VAR6];
        }
        VAR1[100-1] = VAR5''; 
        FUN3(VAR1);
    }
}