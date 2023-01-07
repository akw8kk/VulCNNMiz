static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR4, VAR5'', 100-1);
    VAR4[100-1] = VAR5'';
    {
        wchar_t * VAR1 = *VAR2;
        
        VAR1 = VAR4;
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR6[100*2];
            wmemset(VAR6, VAR5'', 100*2-1); 
            VAR6[100*2-1] = VAR5''; 
            
            wcscpy(VAR6, VAR1);
            FUN3(VAR6);
        }
    }
}