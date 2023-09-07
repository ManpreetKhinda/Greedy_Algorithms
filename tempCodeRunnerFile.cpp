if (deno[i] <= v)
        {
            v -= deno[i];
            coin.push_back(deno[i]);
        }
        else
        {
            i--;
        }