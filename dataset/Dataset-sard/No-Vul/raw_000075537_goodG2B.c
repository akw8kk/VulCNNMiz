static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t VAR4[100];
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
            wchar_t VAR6[100];
            wmemset(VAR6, VAR5'', 100-1); 
            VAR6[100-1] = VAR5''; 
            
            memmove(VAR1, VAR6, 100*sizeof(wchar_t));
            
            VAR1[100-1] = VAR5'';
            FUN2(VAR1);
        }
    }
}