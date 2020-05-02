use std::io;

fn main() {
    for _ in 0..1000 {
        println!("Hello World");
    }
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
