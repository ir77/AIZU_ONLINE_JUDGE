use std::io;

fn main() {
    let numbers = input_5_number();
    let w = numbers[0];
    let h = numbers[1];
    let x = numbers[2];
    let y = numbers[3];
    let r = numbers[4];

    if x - r < 0 {
        println!("No");
        return;
    }

    if y - r < 0 {
        println!("No");
        return;
    }

    if w < x + r  {
        println!("No");
        return;
    }

    if h < y + r {
        println!("No");
        return;
    }

    println!("Yes");
}

#[allow(dead_code)]
fn input_5_number() -> [i32; 5] {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");

    let vec: Vec<&str> = input.split_whitespace().collect();

    let input1: i32 = vec[0].parse().unwrap_or(0);
    let input2: i32 = vec[1].parse().unwrap_or(0);
    let input3: i32 = vec[2].parse().unwrap_or(0);
    let input4: i32 = vec[3].parse().unwrap_or(0);
    let input5: i32 = vec[4].parse().unwrap_or(0);

    [input1, input2, input3, input4, input5]
}
